#ifndef ROBOTCOMPONENT_H
#define ROBOTCOMPONENT_H

#include "EventListener.h"
#include "Robot.h"

/**
 * Represents a modular piece of the robot.
 */
class RobotComponent : public EventListener<RobotEvent>
{
public:
	/**
	 * Let the component update itself. This is called every "tick".
	 */
	virtual void update()=0;
};

#endif // ROBOTCOMPONENT_H
