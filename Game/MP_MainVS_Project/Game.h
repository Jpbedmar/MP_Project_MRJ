#pragma once
#include "Player.h"
#include "GameUtils.h"
#include "Scene.h"

const int MAX_LEVELS = 3;

class Game
{
	private:
		const int blocksWidth = 64;
		const Vector2 screenLenght = { 640, 480 };
		const int groundY = screenLenght.y - blocksWidth * 1;
		const Vector2 spawnPosition = { (float)blocksWidth * 2, (float)blocksWidth * 3.17f };
		const Vector2 friction = { 0.0005f, 0.0005f };

		Player player;
		Scene scenes[MAX_LEVELS];

	public:
		Game();
		~Game();
		void Initialize();
		void Update();
		void Draw();
};

