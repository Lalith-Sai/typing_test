#ifndef TESTDATA_H
#define TESTDATA_H
#include <iostream>
#include <fstream>
#include <unistd.h>

class Test {
        double accuracy;
        double WPM;
    public:
        static void calcWPM();
        static void calcAccuracy();
        void startTest(std::ifstream& file);
};


#endif
