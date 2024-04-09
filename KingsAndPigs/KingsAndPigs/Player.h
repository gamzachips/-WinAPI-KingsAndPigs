#pragma once
#include "Character.h"

enum class PlayerState
{
	Idle,
	Jumping,
	Running,
	Attacking,
	Damaged,
	DoorMoving,
	Die
};

class Player : public Character
{
public:
	Player(CharacterType type);
	virtual ~Player();

	virtual void Init() override;
	virtual void Update() override;
	virtual void Render(HDC hdc) override;

	virtual void Move() override;
	virtual void Attack() override;

private:
	void Jump();
	void Input();
private:
	PlayerState _state = PlayerState::Idle;
};

