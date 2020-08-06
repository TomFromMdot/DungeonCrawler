#pragma once
#include "stdafx.h"
#include "Scene.h"
class SceneManager
{
public:

	SceneManager();
	~SceneManager();
	void pushToSceneList(Scene * s);
	Scene * getSceneByID(int id);
	int	getSize();
	void render(int id);


private:
	static std::vector<Scene*> sceneList;
};

