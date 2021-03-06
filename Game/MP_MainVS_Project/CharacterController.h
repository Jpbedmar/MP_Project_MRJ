#pragma once
#include "GameUtils.h"
#include "Body.h"

class CharacterController : Body
{
private:
	
	Vector2 friction;
	Vector2 speed;
	Vector2 topSpeed;
	Vector2 speedIncrement;
	Vector2 direction;
	Vector2 auxVelocity;
	Vector2 finalVelocity;
	bool updateVelocity;
	bool isJumping;
	bool isGrounded;

	void UpdateVelocity();

public:
	CharacterController();
	CharacterController(Vector2 position, Vector2 topSpeed, Vector2 speedIncrement, Vector2 colliderOffset, Vector2 colliderLenght);
	void Update();
	void Move();
	void Jump();

	~CharacterController();
};

