#ifndef JOYSTICK_H
#define JOYSTICK_H

#include "EventBroadcaster.h"
#include "RobotComponent.h"

/**
 * An event that a Joystick can generate.
 */
struct JoystickEvent
{
	enum Type
	{
		TYPE_AXIS, /**< An axis value event. */
		TYPE_BUTTON, /**< A button state event. */
	};
	
	Type type; /**< The type of Joystick Event. */
	
	union
	{
        /**
         * Data for an Axis event.
         */
		struct Axis
		{
			int axis; /**< The axis number. */
			double value; /**< The current value of the axis. */
		};
		
        /**
         * Data for a Button Event.
         */
		struct Button
		{
			int button; /**< The button number. */
			int state; /**< The button state (1 is on, 0 is off). */
		};
	};
};

/**
 * A simple joystick that supports buttons and analog axis.
 */
class Joystick : public RobotComponent, public EventBroadcaster<JoystickEvent>
{
public:
    /**
     * Get the value of an axis.
     *
     * \param axis the axis number.
     * \return the value of the axis.
     */
	virtual double getAxis(int axis) const =0;

    /**
     * Get the state of a button.
     *
     * \param button the button number.
     * \return the button state.
     * \retval 0 the button is not pressed.
     * \retval 1 the button is pressed.
     */
	virtual int getButtonState(int button) const =0;
};

#endif // JOYSTICK_H
