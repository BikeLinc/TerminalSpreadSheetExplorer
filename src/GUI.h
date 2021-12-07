/**
 * File: GUI.h
 * 
 * Breif: Facilitate the drawing of tsse's text based
 * GUI.
 * 
 * Author: Lincoln Scheer
 * Date: 12/7/21
 */

#ifndef GUI
#define GUI

#include "ncurses.h"

class GUI {
public:
	void update();
	void draw();
};

#endif /* GUI */