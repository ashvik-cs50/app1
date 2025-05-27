#include <iostream>
#include <fstream>
#include <cstdlib>

void compileAndRun(std::string filename) {
    std::string command = "g++ " + filename + " -o output.exe && output.exe";
    int result = system(command.c_str());

    if (result == 0)
        std::cout << "Code executed successfully!" << std::endl;
    else
        std::cout << "Compilation failed!" << std::endl;
}