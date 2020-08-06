#pragma once

class Level
{

	Level getLevel();
	virtual int getId();
	void init();
	static int countInstance;
	int id;

	virtual void update();
};

