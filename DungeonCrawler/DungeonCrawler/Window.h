#pragma once
#include "stdafx.h"
#include "LevelManager.h"
#include "SceneManager.h"
#include "Level.h"



#include "MainMenu.h"

class Window
{
public:
	Window(int w, int h, std::string name);
	~Window();

	void						init();

private:

	void						render();
	void						eventHandller();
	static void					setScene(int id);

	sf::RenderWindow*			_window;
	sf::Event					_event;
	int							_width;
	int							_height;
	std::string					_applicationName;
	LevelManager*				_levelManager;
	SceneManager*				_sceneManager;
	static int					_currentScene;


	MainMenu					states_MainMenu;

	/*LEVELS*/

};

