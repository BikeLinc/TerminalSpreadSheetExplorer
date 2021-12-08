/**
 * File: Controller.h
 * 
 * Breif: Facilitates delegation of tasks based on
 * program state.
 * 
 * Author: Lincoln Scheer
 * Date: 12/7/21
 */

#ifndef _CONTROLLER_
#define _CONTROLLER_

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

#endif /* CONTROLLER */