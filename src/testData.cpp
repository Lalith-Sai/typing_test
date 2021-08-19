#include "../include/utilities.h"
#include "../include/testData.h"

void calcWPM() {

}

void dataCount() {

}

void Test::startTest(std::ifstream& file) {
    std::string line;
    char c;

    std::getline(file, line);

    if (line == "") {
        std::getline(file, line);
    }
    std::cout << line << std::endl;

    while (true) {
        system("stty raw");
        c  = getchar();

        system("stty cooked");
        sleep(1);
    }
    
    
    
}
