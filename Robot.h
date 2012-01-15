#ifndef ROBOT_H
#define ROBOT_H

#include <list>

#include "EventBroadcaster.h"

class RobotComponent;

/**
 * A signal that the robot can send to listeners regarding state changes.
 */
struct RobotEvent
{
	enum Signal
	{
		INIT, /**< Sent when the robot is initializing. */
		SHUTDOWN, /**< Sent when the robot has requested shutdown. */
	};
	
	Signal signal; /**< The signal from the Robot. */
};

/**
 * Represents a robot that can be run.
 */
class Robot : public EventBroadcaster<RobotEvent>
{
public:
	/**
	 * Add a component to the Robot and initialize it.
	 * 
	 * \param component the RobotComponent to add.
	 */
	void addComponent(RobotComponent* component);
	
	/**
	 * The entry point for Robot code.
	 */
	virtual void run()=0;
	
protected:
	/**
	 * Update robot components.
	 */
	void updateComponents();
	
private:
	std::list<RobotComponent*> componentList; /**< The list of components contained in the robot. */
};

#endif // ROBOT_H
