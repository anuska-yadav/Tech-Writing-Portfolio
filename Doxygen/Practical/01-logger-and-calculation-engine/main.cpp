/**
 * \mainpage Student Calculation Project
 *
 * \section intro_sec Introduction
 * This small multi-file C++ project demonstrates Doxygen documentation
 * for a Logger class and a CalculationEngine class.
 *
 * The Logger reports messages, while CalculationEngine performs a
 * power calculation and uses Logger to report the operation.
 */

#include <iostream>
#include "Logger.h"
#include "CalculationEngine.h"

void Logger::log(LogLevel level, const char* message) const {
    if (level < minimumLevel) {
        return;
    }

    const char* label = "INFO";
    switch (level) {
        case DEBUG: label = "DEBUG"; break;
        case INFO: label = "INFO"; break;
        case WARNING: label = "WARNING"; break;
        case ERROR: label = "ERROR"; break;
    }
    std::cout << "[" << label << "] " << message << '\n';
}

double CalculationEngine::power(double base, int exponent) const {
    logger.log(Logger::INFO, "Calculating power.");
    double result = 1.0;

    if (exponent >= 0) {
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
    } else {
        for (int i = 0; i > exponent; --i) {
            result /= base;
        }
    }

    return result;
}

int main() {
    Logger logger(Logger::DEBUG);
    CalculationEngine engine(logger);
    std::cout << "2 raised to 3 = " << engine.power(2.0, 3) << '\n';
    return 0;
}
