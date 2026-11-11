/**
 * \file CalculationEngine.h
 * \brief Declares mathematical operations provided by CalculationEngine.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"

/**
 * \class CalculationEngine
 * \brief Performs basic mathematical calculations.
 * \details The class uses a Logger object to report calculation activity.
 */
class CalculationEngine {
public:
    /**
     * \brief Creates a calculation engine.
     * \param logger Logger used to report operations.
     */
    explicit CalculationEngine(const Logger& logger) : logger(logger) {}

    /**
     * \brief Calculates a base raised to an exponent.
     * \param base The number to be raised to a power.
     * \param exponent The exponent.
     * \return The calculated power.
     * \todo Add validation for unsupported numeric input.
     */
    double power(double base, int exponent) const;

private:
    const Logger& logger;
};

#endif
