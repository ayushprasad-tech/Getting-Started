#pragma once

#include <string>
#include <vector>
#include <map>
#include <memory>

/**
 * @file GameDesignDocument.h
 * @brief Master Game Design Document for Project: TRENCH (Working Title)
 * @author Lead Game Designer / Creative Director
 * @description A standalone survival horror experience meticulously crafted 
 * to replicate the golden era of survival horror (RE1/RE2/RE3/RE7/RE4R).
 */

namespace SurvivalHorrorGDD {

// ============================================================================
// 1. CORE CONCEPT & THEME
// ============================================================================

struct CoreConcept {
    /** 
     * Title Candidates:
     * 1. ECHOES OF BLACKWOOD
     * 2. THE VANGUARD PROTOCOL
     * 3. ABYSSAL REQUIEM
     */
    std::vector<std::string> titleIdeas = {
        "ECHOES OF BLACKWOOD", 
        "THE VANGUARD PROTOCOL", 
        "ABYSSAL REQUIEM"
    };

    /**
     * @brief Setting & Atmosphere
     * Location: The Blackwood Maritime Observatory. An isolated, brutalist, 
     * partially submerged oceanography research facility built over the ruins 
     * of an abandoned 19th-century lighthouse on a remote craggy island.
     * 
     * Visual Aesthetic: Claustrophobic, rusting bulkheads, flickering fluorescent 
     * lights, leaking salt water, and deep shadows. The ocean constantly crashes 
     * against the exterior glass, creating a feeling of crushing pressure and 
     * inescapable isolation.
     */
    std::string setting = "Blackwood Maritime Observatory";

    /**
     * @brief Narrative Hook
     * Premise: The player controls a maritime structural inspector who arrives 
     * following a distress beacon. Upon docking, the automated quarantine protocol 
     * engages, trapping them inside. A bio-engineered deep-sea parasite 
     * (the "Trench Strain") weaponized by a shadow corporation (Nereus Group) 
     * has mutated the research staff. The player must uncover the conspiracy, 
     * restore power, and find an escape submersible.
     */
    std::string narrativeHook = "Trapped in a quarantined, sinking ocean observatory with mutated researchers.";
};

// ============================================================================
// 2. GAMEPLAY MECHANICS & LOOP
// ============================================================================

enum class CameraPerspective {
    OVER_THE_SHOULDER,  // Selected. Modern RE2/RE4 Remake style.
    FIXED_ANGLES
};

class GameplayMechanics {
public:
    CameraPerspective camera = CameraPerspective::OVER_THE_SHOULDER;

    /**
     * @brief Camera & Movement Design
     * We utilize a tight, over-the-shoulder perspective. The Field of View (FOV) 
     * dynamically pulls in closer to the player's back in narrow corridors to 
     * limit peripheral vision and increase claustrophobia. Movement is weighty; 
     * turning has momentum, simulating the exhaustion of the protagonist.
     */
    void UpdateCameraDynamicFOV(float corridorWidth);

    /**
     * @brief Combat & Customization
     * Focuses on extreme resource scarcity and tactical dismemberment.
     * - Shooting legs/kneecaps: Staggers the enemy, allowing the player to slip by.
     * - Shooting arms: Drops their weapons or prevents grabbing.
     * - Melee: No dedicated offensive melee combo system. Melee is strictly a 
     *   high-risk defensive mechanic (e.g., plunging a degrading 'Stun Knife' 
     *   into an enemy's neck to break a grab).
     */
    struct CombatSystem {
        bool bIsAmmoScarce = true;
        bool bEnableTacticalDismemberment = true;
        int defensiveKnivesDurability = 3; // Breaks after 3 grab-escapes
    } combat;

    /**
     * @brief Inventory Management
     * Tetris-style grid inventory (Attache Case). Every item takes up specific slots.
     * Safe Rooms feature universal "Pneumatic Storage Tubes" (Item Boxes).
     * Saving is strictly limited: Players must find "Pneumatic Cylinders" (Ink Ribbons)
     * to send their save logs through the tube network.
     */
    class InventorySystem {
        int gridColumns = 8;
        int gridRows = 6;
        std::map<std::string, std::pair<int, int>> itemFootprints; // e.g., "Shotgun" -> {3, 1}
        int pneumaticCylindersInventory = 0; // Consumed on save
    };
};

// ============================================================================
// 3. PUZZLE DESIGN & EXPLORATION
// ============================================================================

class ExplorationAndPuzzles {
public:
    /**
     * @brief Progression Loop (Lock and Key)
     * Non-linear, interconnected hub design. The player explores the facility to 
     * find oddly specific keys.
     * Key Theme: "Nautical Navigation". Keys include the Sextant, Astrolabe, 
     * Compass, and Chronometer.
     * Backtracking is central: Unlocking the 'Astrolabe Door' in the West Wing 
     * creates a shortcut to the Medical Bay, but triggers a script that floods 
     * the hallway, spawning new amphibious enemies in a previously safe area.
     */
    void EvaluateBacktrackingTriggers(std::string currentKeyObtained);

    /**
     * @brief Sample Puzzle: The Pressure Valve Moon Pool
     * Step 1: Player finds a "Rusted Brass Valve" in Engineering.
     * Step 2: Player examines a leaking pipe and realizes the valve won't seal.
     * Step 3: Player finds "Teflon Tape" in the Maintenance Closet.
     * Step 4: Player combines [Rusted Brass Valve] + [Teflon Tape] in inventory.
     * Step 5: Player inserts the sealed valve into the main pump manifold.
     * Step 6: Player must balance the PSI across 3 chambers (reading a scattered 
     *         engineer's note for the correct numbers) to drain the Moon Pool 
     *         and reveal the ladder down.
     */
    struct MultiStepPuzzle {
        std::string puzzleName = "Moon Pool Drainage";
        std::vector<std::string> requiredItems = {"Rusted Brass Valve", "Teflon Tape"};
        bool bRequiresItemCombination = true;
        bool bRequiresEnvironmentalClue = true;
    };
};

// ============================================================================
// 4. ENEMY & BOSS DESIGN
// ============================================================================

class EntityDesign {
public:
    struct StandardEnemy {
        std::string name;
        std::string behavior;
    };

    /**
     * @brief Standard Enemies (Resource Drains)
     */
    std::vector<StandardEnemy> mobRoster = {
        {"The Drowned", "Slow, relentless shamblers in heavy, water-logged coats. High HP. Designed to block narrow halls and drain ammo."},
        {"The Barnacles", "Fast, wall-crawling predators. Blind, but react to player running or gunfire. Forces slow, stealthy movement."}
    };

    /**
     * @brief The "Stalker" Mechanic
     * Name: "Project LEVIATHAN" (The Bathysphere Brute)
     * Description: A hulking, heavily mutated researcher permanently sealed inside 
     * an antique, armored atmospheric diving suit. 
     * Behavior: Invincible to small arms. Dynamically hunts the player through 
     * the facility based on noise level. You hear the deafening 'CLANG... CLANG' 
     * of its lead boots before you see it. The player must run, barricade doors, 
     * or use environmental traps (like liquid nitrogen vents) to briefly freeze him.
     */
    class StalkerAI {
        std::string stalkerName = "Project LEVIATHAN";
        bool bIsInvincible = true;
        float soundDetectionRadius = 2500.0f; // Hunts based on player noise
        void HuntPlayerDynamic();
        void TriggerEnvironmentalStun();
    };
};

// ============================================================================
// 5. AUDIO, VISUALS, & PACING
// ============================================================================

class AtmosphereAndPacing {
public:
    /**
     * @brief Sound Design
     * Silence is a weapon. The ambient track is mostly the groaning of the 
     * pressurized hull and distant dripping water. 
     * Enemy presence is telegraphed by distinct audio cues (wet dragging feet).
     * The Safe Room Theme: A degraded, melancholic acoustic guitar and cello 
     * track. The moment the player opens the heavy steel door to the safe room, 
     * the audio instantly transitions to this soothing theme, offering massive 
     * psychological relief.
     */
    void PlayDynamicAudioContext(bool bIsInSafeRoom, float playerStressLevel);

    /**
     * @brief Pacing & The Empowerment Curve
     * Phase 1 (Panic): Pistol only, 5 bullets. Running from shadows.
     * Phase 2 (Scarcity): Map memorization, finding puzzle pieces, surviving.
     * Phase 3 (Empowerment): Player fixes the elevator, finds the Riot Shotgun. 
     *         They return to previous areas to confidently clear out "The Drowned".
     * Phase 4 (Subversion): Immediately after empowerment, LEVIATHAN crashes through 
     *         a reinforced wall. The shotgun is useless against him. Panic returns.
     */
    enum class PacingPhase {
        PANIC,
        SCARCITY,
        EMPOWERMENT,
        SUBVERSION
    };
    
    PacingPhase currentPhase = PacingPhase::PANIC;
};

} // namespace SurvivalHorrorGDD