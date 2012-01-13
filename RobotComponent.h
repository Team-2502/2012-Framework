#ifndef ROBOTCOMPONENT_H
#define ROBOTCOMPONENT_H

/**
 * Represents a modular piece of the robot.
 */
class RobotComponent
{
public:
	/**
	 * Let the component update itself. This is called every "tick".
	 */
	virtual void update()=0;
};

#endif // ROBOTCOMPONENT_H
