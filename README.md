"DUEL MASTERS"

Comment out each step once completed

Checklist for Developing Your Game
Setup
Project Structure

<!-- Create directories: assets, include, and src. -->
Create Basic Files

<!-- main.cpp in the src directory. -->
<!-- Player.h and Player.cpp in the include and src directories respectively. -->
Basic Setup
<!-- Setup Raylib -->
<!-- Initialize Raylib and create a window in main.cpp. -->
<!-- Setup a basic game loop to keep the window open and handle drawing and updates. -->
Player Class
Define Player Class

In Player.h, define the Player class with attributes for health and actions.
In Player.cpp, implement the constructor, basic methods, and default values.
Basic Player Methods

Create methods for Attack, Block, and Parry.
Implement a method to handle taking damage.
Game Logic
Action Selection

Implement a method in main.cpp to handle player input and choose actions.
Round Resolution

Create a function to compare actions and determine the outcome of each round.
Implement damage calculation and apply it to the players.
Bot AI
Bot Decision Making
Implement a simple AI in the Player class or a separate Bot class to randomly select actions.
Enhance the bot’s decision-making with weighted random choices based on the player's recent actions.
Critical Hits
Implement Critical Hits
Add a method to determine if a critical hit occurs during an attack.
Adjust damage calculation to handle critical hits.
Game Loop Integration
Update and Draw Methods

Implement Update and Draw methods in the Player class.
Call these methods in the main game loop to update and render players.
Health and Game Over

Display player health on the screen.
Implement a check for game over conditions and handle the end of the game.
Additional Features
Polish and Refinements

Add animations or effects for attacks, blocks, and parries.
Improve the visual presentation (health bars, action feedback).
Audio

Add sound effects for actions and critical hits.
Playtesting and Balancing
Playtest the Game
Regularly test the game to ensure mechanics are balanced and fun.
Adjust damage values, critical hit chances, and bot behavior based on feedback.
