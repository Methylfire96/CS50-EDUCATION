Final Project Space shooter

my video url: https://www.youtube.com/watch?v=DpiWAiJuK6U

Description:

This game is a retro space shooter!
As a kid i was totally fascinated of this concept, so i rebuilt that kind of game.
The animated space ships are self drawn with an unfinished look, more retro looking. What is there, not to love?

The code:

Imports necessary modules: pygame, sys, time, and random.
Initializes Pygame and sets up the window with a caption "Final Project Space Shooter".
Defines various constants and loads images and sounds used in the game.
Defines functions for updating the game elements and displaying them on the screen.

Defines the main game loop in the main() function, where player movement, UFO movement, bullet handling, collision detection, and game state changes are managed.
Checks for events, such as quitting the game or key presses.
Handles player movement based on keyboard input.

Manages UFO movement, creation, and removal.
Handles collisions between the player and UFOs, updating the player's health (COUNTER).
Manages bullets, their movement, and collision with UFOs.
Updates the game screen using the update() function.

Movement:
I set the movement key bindings simple and the possibility to play it with one, or two hands.

W = Up
S = Down
A = Left
D = Right

SPACE = Shoot

Implemented sounds and background music which i researched on the web.

Enemy ships spawn randomly on the lengh of the window width and falling on X, along the window height. When they touch the window height border on the bottom of the screen, they will be removed.
If an enemy ship is shot down by the player, the score is updating and add one point. 
The maximum highscore in this game is 2001 (little thoughtfull number, which represents the year, i got my first pc and the odessey of playing games started)
Also there is a hull power counter, starting with 10 points and will be decreased, every time you hit an enemy ship. To avoid those you can move your ship up, down, left, right.

All in all:
Simple shooter, avoid contact to the enemies or shoot them to reach the highscore.
Have fun and enjoy playing.