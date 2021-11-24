#include <iostream>

#include <ctime>

#include "ull.h"

int main() {
    // ! Notice
    // If you are using dynamic-link library, the DLL
    // file (filename extension is `.so` in Linux and
    // `.dll` in Windows) must be in a location that
    // the executable file can directly access(that is,
    // under the same folder or under system PATH),
    // otherwise it cannot run.
    // But if you are using the statically-linked library
    // (filename extension is `.a` in Linux and `.lib`
    // in Windows), the executable file can run without
    // any other file.

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
