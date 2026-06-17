#include <raylib.h>
const int winWIDTH = 750;
const int winHEIGHT = 750;
Color background = {43, 45, 31, 1};
int main(int argc, char const *argv[])
{
   InitWindow(winWIDTH, winHEIGHT, "GAME SCREEN");
   // setting the fps limit for the game (ceiling for max limit of frames per secondme)
   SetTargetFPS(10);
   // Game Simulation Loop

   while (!WindowShouldClose())
   {
      // EVENT HANDALING

      // UPDATING STATES

      // DRAWING GAME
      BeginDrawing();
      ClearBackground(background);
      EndDrawing();
   }

   CloseWindow();
   return 0;
}
