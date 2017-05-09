#pragma once
#include "Actor.h"
#include "Logger.h"
#include "Handler.h"
#include "EventBox.h"
#include <vector>

class Engine
{
public:
	static int xRes;
	static int yRes;
	Engine(Logger* l, Handler* h, EventBox* e);
	~Engine();
	
	void Init();
private:
	Actor* makeActor(int i, int i1, char c, TCODColor col);
	void Log(std::string t);
	void Engine::renderActors();
	void Engine::render();
	void Engine::update();
	void Engine::doEvent(Event* e);
	int Engine::checkPlayerMovement(int dx, int dy);
	void Engine::movePlayer(int dx, int dy);
	Logger* logger;
	Handler* handler;
	EventBox* eb;
	Actor* player;
	std::vector<Actor> _actors;
};
