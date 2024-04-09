#include "pch.h"
#include "Player.h"
#include "InputManager.h"

Player::Player(CharacterType type) : Character(type)
{
	_hp = 3;
	_maxHp = 3;
	_moveSpeed = 1;
}

Player::~Player()
{
}

void Player::Init()
{
}

void Player::Update()
{
	Move();
}

void Player::Render(HDC hdc)
{
}

void Player::Move()
{
	Input();
}


void Player::Attack()
{
}

void Player::Jump()
{
	
}

void Player::Input()
{
	if (_state == PlayerState::Die || _state == PlayerState::DoorMoving)
		return;

	float deltaTime = GET_SINGLE(TimeManager)->GetDeltaTime();

	if (GET_SINGLE(InputManager)->GetButtonPressed(KeyType::Left))
	{
		_pos.x -= _moveSpeed * deltaTime;
		_state = PlayerState::Running;
	}
	if (GET_SINGLE(InputManager)->GetButtonPressed(KeyType::Right))
	{
		_pos.x += _moveSpeed * deltaTime;
		_state = PlayerState::Running;
	}

	if (GET_SINGLE(InputManager)->GetButtonPressed(KeyType::Up))
	{
		if (_state != PlayerState::Jumping)
		{
			Jump();
			_state = PlayerState::Jumping;
		}
	}
	if (GET_SINGLE(InputManager)->GetButtonPressed(KeyType::Down))
	{
		if (_state != PlayerState::Attacking)
		{
			Attack();
			_state = PlayerState::Attacking;
		}
	}
}

