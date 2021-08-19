#ifndef UTILITIES_H
#define UTILITIES_H
#include <iostream>
#include <thread>
#include <curses.h>
#include <unistd.h>
#include <stdlib.h>
#include <fstream>
#include <string>

void readTest(std::ifstream& file, std::string userChoice = "");

void startTimer();

void fileSize();
#endif
