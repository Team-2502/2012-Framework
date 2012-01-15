#ifndef DISPLAY_H
#define DISPLAY_H

#include "RobotComponent.h"

/**
 * A virtual multi-line display on the driver station.
 */
class Display : public RobotComponent
{
public:
	/**
	 * Print a message to the display.
	 * 
	 * \param line the line number to print to.
	 * \param format the format string to process and display.
	 */
	virtual void printf(int line, const char* format, ...)=0;
};

#endif // DISPLAY_H
