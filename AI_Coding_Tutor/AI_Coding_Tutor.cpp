#include "AI_Coding_Tutor.h"
#include "AI_Helper.h"

void AICodingTutor::analyzeCode(std::string code) {
    std::cout << "Analyzing Code..." << std::endl;
    std::string feedback = AI_Helper::callAIAPI(code);
    std::cout << "AI Feedback: " << feedback << std::endl;
}