#ifndef TESTDATA_H
#define TESTDATA_H
#define BACKSPACE 127
#define WHITE "\x1b[0m";
#define CLEAR "\033[2J\033[1;1H"
#define RED "\x1b[31m"
#define REDBG "\x1b[41m"
#define GREEN "\x1b[32m"
#include <iostream>
#include <fstream>
#include <unistd.h>

class Test {
        double accuracy;
        double WPM;
        int ptr;
    public:
        static void calcWPM();
        static void calcAccuracy();
        void correctLetter(std::string& line);
        void wrongLetter(std::string& line);
        void scanParagraph(std::string line);
        void startTest(std::ifstream& file);
};


#endif
