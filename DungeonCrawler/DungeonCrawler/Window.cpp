#include "Window.h"

int Window::_currentSceneId = 0;

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
	this->_sceneManager->changeTargetScene(2);



	render();
}

void Window::render()
{
	while (_window->isOpen())
	{
		std::cout << _sceneManager->getSize() << std::endl;
		std::cout << _currentSceneId << std::endl;
		{ //DEBUG SCENE SWAP
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) Window::setScene(1);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) Window::setScene(2);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) Window::setScene(3);
		}
		if (Window::_currentSceneId <= 0 || Window::_currentSceneId > _sceneManager->getSize()) 
		{
			Window::setScene(1);
		}

		if (_currentSceneId != _sceneManager->getTargetSceneId())
		{
			_sceneManager->changeTargetScene(_currentSceneId);
			std::cout << "Change State" << std::endl;
		}
		eventHandller();
		_sceneManager->render();
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
	Window::_currentSceneId = id;
}
