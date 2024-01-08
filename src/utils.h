#pragma once

#include <raylib.h>

#define WINDOW_HEIGHT 600
#define WINDOW_WIDTH 800

#define SQUARE_WIDTH 40
#define SQUARE_HEIGHT 40

#define px (WINDOW_WIDTH + SQUARE_WIDTH) / 2.0f
#define py (WINDOW_HEIGHT + SQUARE_HEIGHT) / 2.0f

void rotation_transform(Rectangle *r, float angle);
