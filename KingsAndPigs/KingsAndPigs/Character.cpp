#include "pch.h"
#include "Character.h"

Character::Character(CharacterType type) : _characterType(type), Object(ObjectType::Character) 
{
}

Character::~Character()
{
}

void Character::Gravity()
{
	float deltaTime = GET_SINGLE(TimeManager)->GetDeltaTime();
	_pos.y += _gravitySpeed * deltaTime;
}
