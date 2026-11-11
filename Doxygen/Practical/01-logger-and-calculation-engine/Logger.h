/**
 * \file Logger.h
 * \brief Declares the Logger class and log levels.
 *
 * This file contains the logging interface used by the calculation
 * engine in the practical project.
 */

#ifndef LOGGER_H
#define LOGGER_H

/**
 * \class Logger
 * \brief Provides simple application logging.
 *
 * The Logger class writes messages with an associated log level.
 */
class Logger {
public:
    /**
     * \enum LogLevel
     * \brief Represents the severity of a log message.
     */
    enum LogLevel {
        DEBUG,   /**< Detailed diagnostic information. */
        INFO,    /**< General information about program execution. */
        WARNING, /**< A condition that may require attention. */
        ERROR    /**< An operation failed or encountered an error. */
    };

    /**
     * \brief Constructs a Logger.
     * \param level Minimum log level to display.
     */
    explicit Logger(LogLevel level = INFO) : minimumLevel(level) {}

    /**
     * \brief Writes a message to the console.
     * \param level Severity of the message.
     * \param message Text to be logged.
     */
    void log(LogLevel level, const char* message) const;

private:
    LogLevel minimumLevel;
};

#endif
