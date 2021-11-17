#include "../include/utilities.h"

int main(int argc, char *argv[]) {
    Test test;
    std::ifstream in;

    if (argc == 2) {
        readTest(in, argv[1]);
    }
    else {
        readTest(in);
    }

    std::thread t1(startTimer, std::ref(test));
    test.start(in);

    t1.join();

    return 0;
}
