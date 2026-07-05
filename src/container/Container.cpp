#include "Container.h"

Chunk::Chunk(int width, int height, int depth) {
  // TODO: implement me
}

Cell_Type Chunk::get(int x, int y, int z) {
  // TODO: implement me
}

size_t Chunk::index(int x, int y, int z) {
  // TODO: implement me
}

Container::Container(int size, int dimention) {
  // TODO: implement me
}

Cell &Container::get_cell(int global_x, int global_y, int global_z) {
  // TODO: implement me
}

Chunk &Container::get_chunk(int global_x, int global_y, int global_z) {
  // TODO: implement me
}