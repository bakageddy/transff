#include "utils.h"
#include <math.h>
#include <raylib.h>

void rotation_transform(Rectangle* r, float angle) {
	float radians = (angle * PI) / 180;
	float x = r -> x - px;
	float y = r -> y - py;
	r->x = (x * cosf(radians)) - (y * sinf(radians)) + px;
	r->y = (x * sinf(radians)) + (y * cosf(radians)) + py;
}
