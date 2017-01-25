/*
 * CoreyDrive.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Corey
 */

#ifndef COREYDRIVE_H_
#define COREYDRIVE_H_
#include <wpilib.h>

class CoreyDrive {
	frc::RobotDrive myRobot{0 , 1};


public:
	void Drive(frc::Joystick & stick);

	CoreyDrive();
	virtual ~CoreyDrive();
};

#endif /* COREYDRIVE_H_ */
