#pragma once
#include "stdafx.h"
#include "Level.h"
class LevelManager
{
public:

	LevelManager();
	~LevelManager();

	void pushToLeveList(Level& l);

	static std::vector<Level*> levelList;
};

