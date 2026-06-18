#include <raylib.h>
#include <iostream>
#include "simulation.hpp"
const int winWIDTH = 750;
const int winHEIGHT = 750;
const int cellSize = 25;
Color background = {43, 45, 31, 255};

int main(int argc, char const *argv[])
{
   InitWindow(winWIDTH, winHEIGHT, "GAME SCREEN");
   Simulation sim{winWIDTH, winHEIGHT, cellSize};
   sim.setCellValue(0, 0, 1);
   sim.setCellValue(1, 0, 1);
   sim.setCellValue(1, 3, 1);
   sim.setCellValue(3, 4, 1);
   sim.setCellValue(3, 5, 1);
   sim.setCellValue(4, 5, 1);
   sim.setCellValue(5, 29, 1);
   std::cout << sim.countLiveNeighbours(3, 4) << std::endl;
   // setting the fps limit for the game (ceiling for max limit of frames per second)
   SetTargetFPS(10);

   // Game Simulation Loop
   while (!WindowShouldClose())
   {
      // EVENT HANDALING

      // UPDATING STATES

      // DRAWING GAME
      BeginDrawing();
      ClearBackground(background);
      sim.Draw();
      EndDrawing();
   }

   CloseWindow();
   return 0;
}
