#pragma once
#include "Tile.h"
#include <vector>
class LevelManager {
public:
	static void GenerateTiles();
	static void DrawLevel();
	static void DrawCollisionBoxes();
	static void UpdateLevel();
	static void GenerateNewCol();
	
	static int m_TileSize;
	static std::vector<std::vector<Tile*>> m_level;

private:
	static bool deleteColumnsReadyOutOfScreen();
};