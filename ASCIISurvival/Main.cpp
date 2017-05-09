#include "Engine.h"
#include "Handler.h"
#include "EventBox.h"

int main() {
	Logger l("log.txt");
	EventBox eb(&l);
	Handler h(&l, &eb);
	Engine game(&l, &h, &eb);
	game.Init();

	return 0;
}
