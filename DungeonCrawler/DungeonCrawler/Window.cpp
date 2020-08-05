#include "Window.h"


Window::Window(int w, int h, std::string name) :
	_width(w),
	_height(h),
	_applicationName(name)
{
}

Window::~Window()
{
}

void Window::init()
{
	this->_window = new sf::RenderWindow(sf::VideoMode(_width, _height), _applicationName);
	render();
}

void Window::render()
{
	while (_window->isOpen())
	{
		eventHandller();
		_window->display();
		_window->clear(sf::Color::Black);
	}
}

void Window::eventHandller()
{
	while (_window->pollEvent(_event))
	{
		switch (_event.type)
		{

		case sf::Event::Closed: {	_window->close();	}

		}
	}
}
