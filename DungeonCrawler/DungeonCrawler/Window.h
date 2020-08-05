#pragma once
#include "stdafx.h"
class Window
{
public:
	Window(int w, int h, std::string name);
	~Window();

	void						init();

private:

	void						render();
	void						eventHandller();

	sf::RenderWindow*			_window;
	sf::Event					_event;
	int							_width;
	int							_height;
	std::string					_applicationName;

};

