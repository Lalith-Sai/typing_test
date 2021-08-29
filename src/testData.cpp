#include "../include/utilities.h"
#include "../include/testData.h"

void Test::calcWPM() {

}

void Test::calcAccuracy() {

}

void Test::correctLetter(std::string& line) {
    std::string tmp = "";
    tmp += GREEN;
    tmp += line.at(ptr);
    tmp += WHITE;

    line.replace(ptr, 1, tmp);
    ptr += 10;
}

void Test::wrongLetter(std::string& line) {
    std::string tmp = "";
    if (line.at(ptr) == ' ') {
        tmp += REDBG;
    }
    else {
        tmp += RED;
    }
    tmp += line.at(ptr);
    tmp += WHITE;

    line.replace(ptr, 1, tmp);
    ptr += 10;
}

void Test::scanParagraph(std::string line) {
    system("stty raw");
    ptr = 0;

    while (ptr < line.length()) {
        char c  = getchar();

        if (c == line.at(ptr)) {
            correctLetter(line);
        }
        else if (c == BACKSPACE) {
            if (ptr == 0) {
                continue;
            }
            
            std::string tmp(1, line.at(ptr - 5));
            line.replace(ptr - 10, 10, tmp);
            ptr -= 10;
        }
        else {
            wrongLetter(line);
        }
        std::cout << CLEAR;
        std::cout << line << std::endl;
    }
    system("stty cooked");
}

void Test::startTest(std::ifstream& file) {
    std::string line;

    while (!file.eof()) {
        std::getline(file, line);
        if (line == "") {
            std::getline(file, line);
        }

        std::cout << CLEAR;
        std::cout << line << std::endl;

        scanParagraph(line);
        std::cout << std::endl;
    }

    std::cout << "END" << std::endl;

}
