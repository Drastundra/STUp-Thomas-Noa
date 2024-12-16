#include "Timer.h"

Timer::Timer() {
    reset();
}

void Timer::reset() {
    start = std::chrono::high_resolution_clock::now();
}

double Timer::elapsed() const {
    auto now = std::chrono::high_resolution_clock::now();
    return std::chrono::duration<double>(now - start).count();
}
