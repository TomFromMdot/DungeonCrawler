#include "SceneManager.h"



std::vector<Scene*>  SceneManager::sceneList = {};

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::pushToSceneList(Scene * s)
{
	SceneManager::sceneList.push_back(s);
}

Scene * SceneManager::getSceneByID(int id)
{
	for (int i = 0; i < SceneManager::sceneList.size(); i++)
	{
		if (SceneManager::sceneList[i]->getId() == id) {
			
			return SceneManager::sceneList[i];
		}
	}

}

int SceneManager::getSize()
{
	return SceneManager::sceneList.size();
}

void SceneManager::render(int id)
{

	getSceneByID(id)->renderScene();
}
