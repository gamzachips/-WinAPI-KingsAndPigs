#pragma once

enum class ObjectType
{
	None,
	Character,
	Box,
	Bomb,
	Cannon,
	Door,
	Life,
	Coin,
	DialogueBox
};

class Object
{
public:
	Object(ObjectType type);
	virtual ~Object();

	virtual void Init() abstract;
	virtual void Update() abstract;
	virtual void Render(HDC hdc) abstract;

public:
	ObjectType GetObjectType() { return _objectType; }

	Pos GetPosition() { return _pos; }
	void SetPosition(Pos pos) { _pos = pos; }

protected:
	ObjectType _objectType = ObjectType::None;
	Pos _pos = {};

};

