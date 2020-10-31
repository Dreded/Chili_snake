#pragma once

#include "Graphics.h"

class SpriteCodex
{
public:
	//Game over Width and height are 83x63 so we offset to draw centered
	static void DrawGameOver( int x,int y,Graphics& gfx );
	static constexpr int gameOverWidth = 83;
	static constexpr int gameOverHeight = 63;
	static void DrawTitle( int x,int y,Graphics& gfx );
	static constexpr int titleWidth = 213;
	static constexpr int titleHeight = 160;
};