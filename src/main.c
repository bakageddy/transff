#include <raylib.h>
#include "utils.h"


int main(void) {
	SetWindowState(FLAG_WINDOW_RESIZABLE);
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "2D Transformations");

	Rectangle r = {
		.x = WINDOW_WIDTH / 2.0,
		.y = WINDOW_HEIGHT / 2.0,
		.width = SQUARE_WIDTH,
		.height = SQUARE_HEIGHT,
	};
	float angle = 0;


	SetTargetFPS(60);
	while (!WindowShouldClose()) {
		BeginDrawing();
		rotation_transform(&r, angle);
		DrawRectangleRec(r, RAYWHITE);
		ClearBackground(BLACK);
		EndDrawing();
		angle += 1.0f;
	}
	CloseWindow();
	return 0;
}
