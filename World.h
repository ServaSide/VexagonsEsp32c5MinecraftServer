#ifndef WORLD_H
#define WORLD_H

#include <stdlib.h>
#include <stdint.h>

typedef struct { 
  uint16_t x, z;
  uint8_t y;
  uint8_t state;
} WorldChange;

typedef struct {
  WorldChange changes[42000];
  int changesLen;
  int
} World;

uint8_t getBlock(int x, int y, int z); // universal world generator

World world_init(); // constructor
void world_delete(World* world); // destructor

void world_serialize(World* world);
void world_deserialize(World* world);

#endif
