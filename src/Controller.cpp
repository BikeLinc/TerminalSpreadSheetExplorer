#include "Controller.h"

void Controller::start() {
	running = true;
	loop();
}

void Controller::stop() {
	running = false;
}

void Controller::loop() {

	Input input;
	GUI gui;

	while(running) {
		if (input.hasInput()) {
			char c = input.getInput();
			delegate(c);
			gui.update();
			gui.draw();
		}
	}
}

void Controller::delegate(char c) {



}