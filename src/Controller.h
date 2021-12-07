#include "GUI.h"
#include "Input.h"

class Controller {
public:
	void start();
	void stop();
	void loop();
private:
	bool running = false;
	void delegate(char c);
};