#pragma once

#include "resource.h"
#ifndef AI_CODING_TUTOR_H
#define AI_CODING_TUTOR_H

#include <iostream>
#include <string>

class AICodingTutor {
public:
    void analyzeCode(std::string code);
    std::string provideFeedback();
};

#endif // AI_CODING_TUTOR_H