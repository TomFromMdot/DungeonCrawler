#pragma once
#include "stdafx.h"
class Scene
{
public:
	Scene();
	~Scene();
	virtual int getId();
	virtual void renderScene();
	
private:
	int id;
	static int countInstance;
};

