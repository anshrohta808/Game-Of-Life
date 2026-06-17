#include <raylib.h>
#include "grid.hpp"
const int winWIDTH = 750;
const int winHEIGHT = 750;
const int cellSize = 25;
Color background = {43, 45, 31, 255};

int main(int argc, char const *argv[])
{
   InitWindow(winWIDTH, winHEIGHT, "GAME SCREEN");
   // setting the fps limit for the game (ceiling for max limit of frames per second)
   SetTargetFPS(10);
   grid g{winWIDTH, winHEIGHT, cellSize};
   g.setValue(0, 0, 1);
   // Game Simulation Loop

   while (!WindowShouldClose())
   {
      // EVENT HANDALING

      // UPDATING STATES

      // DRAWING GAME
      BeginDrawing();
      ClearBackground(background);
      g.Draw();
      EndDrawing();
   }

   CloseWindow();
   return 0;
}
