#ifndef SDL_HEX_H
#define SDL_HEX_H

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdlib.h>

#include "graph.h"

typedef SDL_Surface* SCREEN;

SCREEN init_drawing();

void update_drawing(SDL_Surface *screen, struct graph_t *graph,  char shape, int side_size);

int next_move(struct graph_t *g);

int pause_screen();

void finalize_drawing();

#endif