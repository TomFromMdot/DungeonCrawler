#pragma once
#include "stdafx.h"
class Scene
{
public:
	Scene();
	~Scene();
	int getId();
	virtual void renderScene();
	
private:
	int id;
	static int countInstance;
};

