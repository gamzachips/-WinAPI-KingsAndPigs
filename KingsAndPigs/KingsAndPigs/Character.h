#pragma once
#include "Object.h"

enum class CharacterType
{
	None,
	Player,
	PigThrowingBox,
	PigThrowingBomb,
	PigWithMatch,
	KingPig
};

class Character : public Object
{
public:
	Character(CharacterType type);
	virtual ~Character();

	virtual void Init() abstract;
	virtual void Update() abstract;
	virtual void Render(HDC hdc) abstract;

public:
	virtual void Move() abstract;
	virtual void Attack() abstract; 
	virtual void Gravity();

protected:
	int32 _hp = 0;
	int32 _maxHp = 0;
	float _moveSpeed = 0;
	float _gravitySpeed = 1;
	CharacterType _characterType = CharacterType::None;
};

