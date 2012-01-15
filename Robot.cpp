#include "Robot.h"
#include "RobotComponent.h"

using std::list;

void Robot::addComponent(RobotComponent* component)
{
	this->componentList.push_back(component);
}

void Robot::updateComponents()
{
	for( list<RobotComponent*>::iterator it = this->componentList.begin(); it != this->componentList.end(); ++it )
	{
		(*it)->update();
	}
}
