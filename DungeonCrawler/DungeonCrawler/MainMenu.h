#pragma once
#include "SceneManager.h"
class MainMenu : public Scene
{
public:
	MainMenu();                           
	~MainMenu();
	void renderScene();

private:

	SceneManager sm;


};

