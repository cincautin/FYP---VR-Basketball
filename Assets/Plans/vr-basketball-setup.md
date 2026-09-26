# Project Overview
- **Game Title**: Simple VR Basketball (Quest 2)
- **High-Level Concept**: A physics-driven virtual reality basketball shooting experience for Meta Quest 2. The player stands on a court, picks up basketballs using motion controllers or hand tracking, shoots them into a regulation-height hoop, and earns points tracked on an arcade scoreboard.
- **Players**: Single player
- **Inspiration / Reference Games**: *Hoops VR*, *Gym Class VR*, *First Steps* (Meta VR tutorial basketball mini-game)
- **Tone / Art Direction**: Casual arcade sports with clean, stylized-realistic URP visuals.
- **Target Platform**: Meta Quest 2 (Android Standalone / PC VR via Quest Link)
- **Screen Orientation / Resolution**: VR Stereo (Quest 2 ~1832x1920 per eye, 72Hz/90Hz)
- **Render Pipeline**: Universal Render Pipeline (URP 17.5.0)

---

# Game Mechanics

## Core Gameplay Loop
1. **Spawn / Ready**: The player spawns on a basketball court facing a basketball hoop placed at regulation height (~3.05m / 10ft high, ~4.5m / 15ft away from the free-throw line).
2. **Interact & Pickup**: Basketballs spawn on a ball rack or return tray within arm's reach. The player reaches out and uses the grip/trigger button on their Quest Touch controller to grab a basketball.
3. **Aim & Release (Throwing Physics)**: The player swings their arm and releases the grip/trigger button. The Meta XR Interaction SDK calculates the controller's linear and angular velocity at release, giving the ball realistic projectile trajectory.
4. **Collision & Net Physics**: The basketball bounces realistically off the backboard, rim, and ground using physics materials with realistic bounciness and friction.
5. **Score & Feedback**: Passing through the hoop trigger from top to bottom increments the player's score, triggers audio/visual feedback (swish sound and particle flash), and respawns the ball if it rolls out of bounds.

## Controls and Input Methods
- **Quest 2 Touch Controllers**:
  - **Grip Button (Grip / Squeeze)**: Grab and hold a basketball in proximity.
  - **Release Grip**: Release the basketball with inherited throwing velocity.
  - **Primary Index Trigger**: Alternative grab or menu interaction.
  - **Thumbsticks**: Smooth locomotion / snap turning (optional, static standing position default for anti-motion-sickness).
  - **Haptics**: Brief controller vibration pulse on grabbing the ball, dribbling/holding, and scoring.
- **Hands (Optional Meta XR Hand Tracking)**:
  - Pinch / palm grab gesture to pick up and throw basketballs naturally.

---

# UI

## Wireframe & HUD Layout
- **World-Space Scoreboard (Mounted above/near the backboard)**:
  ```
  +---------------------------------------+
  |              VR HOOPS                 |
  |  SCORE: [ 000 ]    STREAK: [ x0 ]     |
  |  TIME:  [ 60s ]    HIGH:   [ 120]     |
  +---------------------------------------+
  ```
- **In-Game World Canvas**: Placed 0.5m above the backboard or on an adjacent stanchion post to avoid cluttering player view.
- **Ball Rack / Return Indicator**: Highlighting or visual ring showing where fresh basketballs can be grabbed.
- **Simple Reset / Menu Button**: Floating world-space button near the player stand zone to reset score or retrieve balls.

---

# Key Asset & Context

## Imported & Available Assets
1. **Basketball Asset** (`Assets/TierrasDeRol/Basketball/`):
   - Prefab: `Assets/TierrasDeRol/Basketball/URP/Prefabs/URPOrange.prefab` (URP Lit materials ready).
   - Mesh: `Assets/TierrasDeRol/Basketball/Mesh/Basketball.fbx`.
2. **Basketball Ring Asset** (`Assets/MarioParadiso/BasketballRing/`):
   - Prefab: `Assets/MarioParadiso/BasketballRing/Built-In/Prefabs/Ring.prefab`.
   - Materials: `Assets/MarioParadiso/BasketballRing/Built-In/Materials/` (Requires URP conversion).
3. **Meta XR SDK Interaction Package** (`Packages/com.meta.xr.sdk.interaction.ovr/`):
   - Player Rig: `OVRCameraRig.prefab` and `OVRComprehensiveInteractionRig.prefab`.
   - Grabbing Components: `Grabbable`, `GrabInteractable`, `TouchHandGrabInteractable`, `DistanceHandGrabInteractable`, `VelocityTracker`.

## New Scripts & Components to Create
1. `Assets/Scripts/Basketball/HoopScoringTrigger.cs`: Detects when a basketball enters from above and exits downward to register valid points and prevent double-scoring.
2. `Assets/Scripts/Basketball/BallRespawnZone.cs`: Detects when balls roll out of bounds or come to a rest and returns them to the player's ball rack.
3. `Assets/Scripts/Basketball/ScoreboardManager.cs`: World-space UI manager tracking current score, best score, streak, and audio feedback.
4. `Assets/Physics/BasketballPhysicMaterial.physicMaterial`: Physics material setting bounciness (~0.75-0.82) and friction (~0.5) for realistic ball bounce.

---

# Implementation Steps

### Phase 1: Environment & Material Setup
- **Step 1: Convert Basketball Ring Materials to URP**
  - **Description**: Update the Built-in Standard materials on the Ring prefab (`Ring.prefab` & `Net .prefab`) to `Universal Render Pipeline/Lit` shaders, reconnecting Albedo, Metallic, and Normal textures.
  - **Assigned role**: developer
  - **Dependencies**: None
  - **Parallelizable**: Yes

- **Step 2: Build Court Environment & Place Hoop**
  - **Description**: In `Assets/Scenes/SampleScene.unity`, create a floor with a `BoxCollider` and court material. Place the Basketball Ring prefab at regulation height (Rim top at Y = 3.05m / 10ft). Add backboard `BoxCollider` and rim colliders.
  - **Assigned role**: developer
  - **Dependencies**: Step 1
  - **Parallelizable**: No

### Phase 2: VR Player & Interaction Setup
- **Step 3: Setup Meta XR Player Rig**
  - **Description**: Remove default 2D `Main Camera` and instantiate `OVRComprehensiveInteractionRig` (or `OVRCameraRig` with Interaction OVR components) in the scene, positioned at the free throw line (Z = -4.5m). Configure controller tracking and floor-level tracking origin.
  - **Assigned role**: developer
  - **Dependencies**: None
  - **Parallelizable**: Yes

- **Step 4: Configure Basketball Physics & Meta XR Grabbable**
  - **Description**: Create a `BasketballPhysicMaterial` with bounciness ~0.8. Add `SphereCollider`, `Rigidbody` (mass: 0.62kg, Collision Detection: Continuous Dynamic), `Grabbable`, `GrabInteractable`, and Meta XR velocity tracking components to `URPOrange.prefab`.
  - **Assigned role**: developer
  - **Dependencies**: Step 3
  - **Parallelizable**: No

### Phase 3: Gameplay, Scoring & UI Systems
- **Step 5: Implement Hoop Scoring Trigger System**
  - **Description**: Create `HoopScoringTrigger.cs` with dual-trigger entry/exit detection (top trigger -> bottom trigger) inside the rim to ensure only top-down baskets count.
  - **Assigned role**: developer
  - **Dependencies**: Step 2
  - **Parallelizable**: Yes

- **Step 6: Implement Scoreboard & Sound/Haptic Feedback**
  - **Description**: Create a world-space Canvas attached above the backboard with `TextMeshPro` text for score and streak. Implement `ScoreboardManager.cs` to update score and trigger audio clips (swish, backboard hit, rim hit).
  - **Assigned role**: developer
  - **Dependencies**: Step 5
  - **Parallelizable**: No

- **Step 7: Implement Ball Spawner & Auto-Return**
  - **Description**: Create a ball rack near the player's stand zone with `BallRespawnZone.cs`. If a ball sits on the floor for more than 5 seconds after a shot, return it smoothly to the rack.
  - **Assigned role**: developer
  - **Dependencies**: Step 4
  - **Parallelizable**: No

---

# Verification & Testing

1. **Material & Visual Verification**:
   - Verify in Editor Scene view that the Basketball and Hoop render with proper URP materials and no pink/magenta missing shader artifacts.
2. **Physics & Grabbing Verification (Editor Simulation / Quest Link)**:
   - Verify that the basketball can be picked up with controller grip triggers.
   - Verify that swinging and releasing throws the ball naturally with proper velocity transfer.
   - Verify that the ball bounces realistically against the backboard, rim, and court floor.
3. **Scoring Logic Verification**:
   - Verify that throwing the ball cleanly through the rim increments the score by +2 (or +3 from distance).
   - Verify that throwing the ball from underneath the hoop does NOT trigger a score.
4. **Respawn & Reset Verification**:
   - Throw a ball out of range and ensure it respawns on the player rack after the cooldown timer.
5. **Standalone Quest 2 Build Check**:
   - Build for Android / Quest 2 and confirm smooth 72/90 FPS performance without stutter.