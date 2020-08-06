#include "LevelManager.h"
LevelManager::LevelManager()
{
}

LevelManager::~LevelManager()
{
}


std::vector<Level*>  LevelManager::levelList = {};

void LevelManager::pushToLeveList(Level& l)
{
	LevelManager::levelList.push_back(&l);
}



