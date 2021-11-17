#include "../include/utilities.h"
#include "../include/testData.h"

Test::Test() {
    ptr = 0;
    correctLetters = 0;
    wrongLetters = 0;
    WPM = 0;
    accuracy = 0;
}

void Test::calcWPM() {
    int allEntries = correctLetters + wrongLetters;
    double grossWPM = (allEntries / 5) / 1;
    
    WPM = grossWPM - (wrongLetters / 1);

    std::cout << "WPM: " << WPM << std::endl;
}

void Test::calcAccuracy() {
    if (correctLetters + wrongLetters == 0) {
        accuracy = 0;
    }
    else {
        accuracy = (correctLetters / static_cast<double>(correctLetters + wrongLetters)) * 100;
        accuracy = round(accuracy * 100.0) / 100.0;
    }

    std::cout << "Accuracy: " << accuracy << std::endl;;
}

void Test::correctLetter(std::string& line) {
    std::string buffer = "";
    buffer += GREEN;
    buffer += line.at(ptr);
    buffer += WHITE;
    
    line.replace(ptr, 1, buffer);
    
    correctLetters++;
    ptr += 10;
}

void Test::wrongLetter(std::string& line) {
    std::string buffer = "";
    if (line.at(ptr) == ' ') {
        buffer += REDBG;
    }
    else {
        buffer += RED;
    }
    buffer += line.at(ptr);
    buffer += WHITE;

    line.replace(ptr, 1, buffer);

    wrongLetters++;

    ptr += 10;
}

void Test::scanParagraph(std::string line) {
    system("stty raw");
    ptr = 0;

    while (ptr < line.length()) {
        char c  = getchar();

        //Exits program upon Ctrl + C
        if (c == 3) {
            system("stty cooked");
            exit(1);
        }

        if (c == line.at(ptr)) {
            correctLetter(line);
        }
        else if (c == BACKSPACE) {
            if (ptr == 0) {
                continue;
            }

            std::string tmp = line.substr(ptr - 10, ptr - 5);
            std::string letterColor = tmp.substr(0, 5);
            if (letterColor == RED || letterColor == REDBG) 
                wrongLetters--;
            
            std::string buffer(1, line.at(ptr - 5));
            line.replace(ptr - 10, 10, buffer);
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

void Test::start(std::ifstream& file) {
    std::string line;

    while (!file.eof()) {
        std::getline(file, line);
        if (line == "") {
            std::getline(file, line);
        }

        std::cout << CLEAR;
        std::cout << line << std::endl;

        scanParagraph(line);
    }

    file.clear();
    file.seekg(0);
    start(file);
}
