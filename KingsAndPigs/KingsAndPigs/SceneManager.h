#pragma once

class Scene;

class SceneManager
{
	DECLARE_SINGLE(SceneManager)

public:
	void Init();
	void Update();
	void Render(HDC hdc);

public:
	void ChangeScene(SceneType sceneType);
private:
	Scene* _scene = nullptr;
	SceneType _sceneType = SceneType::None;
};

