#include "Scene.h"

Scene::Scene()
{
	Scene::countInstance++;
	id = Scene::countInstance;
	std::cout << "Create new scene and set id: " << id << std::endl;
}

Scene::~Scene()
{
}

int Scene::getId()
{
	
	return this->id;
}

void Scene::renderScene()
{

}

int Scene::countInstance = 0;
