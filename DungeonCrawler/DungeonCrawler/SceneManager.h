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
	int getTargetSceneId();


	void setTargetScene(Scene * s);
	void render();
	void changeTargetScene(int id);

private:
	static std::vector<Scene*> sceneList;
	Scene * targetScene;



};

