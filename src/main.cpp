#include <raylib.h>
#include <iostream>
#include "simulation.hpp"
const int winWIDTH = 1080;
const int winHEIGHT = 1000;
const int cellSize = 4;
Color background = {0, 0, 0, 255};

int main(int argc, char const *argv[])
{
   InitWindow(winWIDTH, winHEIGHT, "GAME SCREEN");
   Simulation sim{winWIDTH, winHEIGHT, cellSize};

   // setting the fps limit for the game (ceiling for max limit of frames per second)
   SetTargetFPS(12);

   // Game Simulation Loop
   while (!WindowShouldClose())
   {
      // EVENT HANDALING
      if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
      {
         Vector2 mouse_coordinates = GetMousePosition();
         int row = mouse_coordinates.y / cellSize;
         int col = mouse_coordinates.x / cellSize;
         sim.ToggleCell(row, col);
      }
      if (IsKeyPressed(KEY_ENTER))
      {
         SetWindowTitle("**** Game of Life Started ****");
         sim.Start();
      }
      else if (IsKeyPressed(KEY_SPACE))
      {
         SetWindowTitle("**** Game of Life Stopped ****");
         sim.Stop();
      }
      else if (IsKeyPressed(KEY_R))
      {
         sim.createRandomState();
      }
      else if (IsKeyPressed(KEY_BACKSPACE))
      {
         sim.clearGrid();
      }

      // UPDATING STATES
      sim.update();

      // DRAWING GAME
      BeginDrawing();
      ClearBackground(background);
      sim.Draw();
      EndDrawing();
   }

   CloseWindow();
   return 0;
}
