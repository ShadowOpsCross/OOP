#include <iostream>
#include <vector>
#include "Expression.h"

int main() {
    std::vector<Expression> expressions = {
        Expression(1, 2, 3),
        Expression(-10, 5, 2),
        Expression(1, 2, 0),
        Expression(1, 84, 2)
    };

    for (size_t i = 0; i < expressions.size(); ++i) {
        std::cout << "Expression " << i + 1 
                  << " (a=" << expressions[i].getA() 
                  << ", b=" << expressions[i].getB() 
                  << ", c=" << expressions[i].getC() << "): ";
        
        try {
            double result = expressions[i].calculate();
            std::cout << result << std::endl;
        } 
        catch (const std::invalid_argument& e) {
            std::cout << "Math Error -> " << e.what() << std::endl;
        } 
        catch (const std::runtime_error& e) {
            std::cout << "Runtime Error -> " << e.what() << std::endl;
        } 
        catch (...) {
            std::cout << "Unknown error occurred." << std::endl;
        }
    }

    return 0;
}