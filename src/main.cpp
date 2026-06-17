#include <raylib.h>
const int winWIDTH = 750;
const int winHEIGHT = 750;

int main(int argc, char const *argv[])
{
   InitWindow(winWIDTH, winHEIGHT, "GAME SCREEN");
   // setting the fps limit for the game (ceiling for max limit of frames per second)
   SetTargetFPS(10);
   // Game Simulation Loop

   while (!WindowShouldClose())
   {
      // EVENT HANDALING

      // UPDATING STATES

      // DRAWING GAME
      BeginDrawing();
      EndDrawing();
   }

   CloseWindow();
   return 0;
}
