#include "Level.h"

int Level::countInstance = 0;

Level Level::getLevel()
{
	return *this;
}

int Level::getId()
{
	return id;
}

void Level::init()
{
	Level::countInstance++;
	id = Level::countInstance;
}

void Level::update()
{
}
