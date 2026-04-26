#include "MathHelper.h"
#include <cmath>
#include <stdexcept>

double MathHelper::calculateLn(double value) {
    if (value <= 0) {
        throw std::invalid_argument("Logarithm argument must be positive.");
    }
    return std::log(value);
}