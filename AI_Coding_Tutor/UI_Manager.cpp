#include <iostream>
#include "AI_Coding_Tutor.h"

void onRunCodeButtonClick() {
    std::string userCode;
    std::cout << "Enter your code: ";
    std::getline(std::cin, userCode);

    AICodingTutor tutor;
    tutor.analyzeCode(userCode);
}