#ifndef GYRO_H
#define GYRO_H

#include "RobotComponent.h"

/**
 * A gyroscope.
 */
class Gyro : public RobotComponent
{
public:
	/**
	 * Get the orientation of the Gyro.
	 * 
	 * \return the angle of orientation (in degrees).
	 */
	virtual double getOrientation() const =0;
	
	/**
	 * Reset the Gyro and make the current orientation zero.
	 */
	virtual void reset()=0;
};

#endif // GYRO_H
