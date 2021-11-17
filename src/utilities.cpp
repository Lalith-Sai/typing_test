#include "../include/utilities.h"

void readTest(std::ifstream& file, std::string userChoice) {
    std::string testPath;

    if (userChoice == "") {
        srand(time(NULL));
        int num = rand() % 5 + 1;

        std::string article = "article" + std::to_string(num) + ".txt";
        testPath = "article_samples/" + article;
    }
    else {
        testPath = userChoice;
    }

    file.open(testPath);

    if (!file) {
        std::cout << "Incorrect file path.";
        exit(EXIT_FAILURE);
    }  

}

//THREAD
void startTimer(Test& t) {
    for (int i = 0; i <= 60; i++) {
        sleep(1);
    }

    std::cout << CLEAR;
    t.calcWPM();
    t.calcAccuracy();
    exit(EXIT_SUCCESS);
}
