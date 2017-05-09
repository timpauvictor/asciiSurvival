#include "Handler.h"
#include "libtcod.hpp"
#include "Logger.h"
#include "Event.h"

void Handler::tick()
{
	TCOD_key_t key;
	TCOD_mouse_t mouse;
	TCOD_event_t ev = TCODSystem::checkForEvent(TCOD_EVENT_ANY, &key, &mouse); //event type, key pointer, mouse pointer
	if (ev == TCOD_EVENT_KEY_PRESS && key.c == 'w')
	{
		logger->log("W pressed", 3);
		Translate(&ev, &key, nullptr);
	}
	
}

void Handler::Translate(TCOD_event_t* ev, TCOD_key_t* key = nullptr, TCOD_mouse_t* mouse = nullptr)
{
	if (key)
	{
		Event e(keyPress, key->c);
		eb->add(&e);
	} else if (mouse)
	{
		
	}
}

void Handler::Dispatch(Event * e)
{

}

Handler::Handler(Logger* l, EventBox* e)
{
	logger = l;
	eb = e;
}

Handler::~Handler()
{
}

