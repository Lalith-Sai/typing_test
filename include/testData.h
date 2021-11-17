#ifndef TESTDATA_H
#define TESTDATA_H
#define WHITE "\x1b[0m";
#define CLEAR "\033[2J\033[1;1H"
#define RED "\x1b[31m"
#define REDBG "\x1b[41m"
#define BLUEBG "\x1b[44m"
#define GREEN "\x1b[32m"
#define BACKSPACE 127
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <curses.h>
#include <stdlib.h>
#include <string>
#include <atomic>
#include <thread>

class Test {
        double accuracy;
        double WPM;
        int correctLetters;
        int wrongLetters;
        int ptr;
    public:
        Test();
        void calcWPM();
        void calcAccuracy();
        void correctLetter(std::string& line);
        void wrongLetter(std::string& line);
        void scanParagraph(std::string line);
        void start(std::ifstream& file);
};

#endif
