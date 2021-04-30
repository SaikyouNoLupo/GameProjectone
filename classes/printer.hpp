#ifndef PRINTER_HPP_INCLUDED
#define PRINTER_HPP_INCLUDED

#include <ncurses.h>
#include "misc.hpp"
#include "livingentity.hpp"

// lo scopo di questo insieme di funzioni è quello di stampare

void startDraw();
void endDraw();
void printChar(point point, char ch);
void printString(point point, const char* string);
void drawRect(int startX, int startY, int width, int heigth);
void printRoom(char ** cont, int x, int y, int width, int heigth);
void printEverything(LivingEntity * player, point dim);

#endif