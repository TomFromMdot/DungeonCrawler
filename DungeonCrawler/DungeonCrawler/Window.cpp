#include "Window.h"

int Window::_currentScene = 0;

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
	this->_window->setFramerateLimit(60u);
	this->_levelManager = new LevelManager();
	this->_sceneManager = new SceneManager();




	render();
}

void Window::render()
{
	while (_window->isOpen())
	{
		if (Window::_currentScene <= 0 || Window::_currentScene < _sceneManager->getSize())
			Window::setScene(1);
		eventHandller();
		_sceneManager->render(_currentScene);
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

void Window::setScene(int id)
{
	Window::_currentScene = id;
}
