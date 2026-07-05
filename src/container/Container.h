/**
Container.h
Created: 6/7/26
About: in memory storage of world state within sparse,
allowing for different dimentions to be stored between 1 to 3 dimentions
 */

#pragma once

#ifndef CONTAINER_H
#define CONTAINER_H

#include <cstdint>
#include <vector>

/**
Enum for capturing the cell state in small iss byte size
*/
enum class Cell_Type : uint8_t { White, Empty };

/**
Small struct to labal a cell in chunk/grid system
*/
struct Cell {
  Cell_Type type;
};

/**
A system to keep track of cells within the main system
*/
class Chunk {
public:
  Chunk(int width, int height, int depth);
  Cell_Type get(int x, int y, int z);

private:
  size_t index(int x, int y, int z);
  int width, height, depth;
  std::vector<Cell> cells;
};

/**
Sparse like world container for managing cells within a chunk
*/
class Container {
public:
  Container(int size, int dimention);
  Cell &get_cell(int global_x, int global_y, int global_z);
  Chunk &get_chunk(int global_x, int global_y, int global_z);

private:
  std::vector<Chunk> grid;
};

#endif