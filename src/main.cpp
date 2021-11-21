#include <iostream>

#include <ctime>

#include "ull.h"

int main() {
    // ! Notice
    // You must put the dll file and the executable
    // file in the same directory, or it cannot run.

    // Initialize ULL with file name
    Ull testUll("test.dat");

    // Save current time(hhmmss as integer) to file
    auto tt = time(nullptr);
    auto currentTime = localtime(&tt);
    testUll.addNode(UllNode(currentTime->tm_hour * 10000
                            + currentTime->tm_min * 100
                            + currentTime->tm_sec,
                            "Bello ACM!"));

    // Print all entries in file.
    std::vector<int> retVec;
    testUll.findNode("Bello ACM!", retVec);
    for (auto item:retVec) std::cout << item << std::endl;

    return 0;
}
