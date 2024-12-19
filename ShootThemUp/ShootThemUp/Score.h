#pragma once

#include <string>

class Score {
public:
    Score(const std::string& pseudo, float timeSurvived);

    std::string pseudo;
    float timeSurvived;
};