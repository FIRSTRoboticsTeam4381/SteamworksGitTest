/*
 * CoreyDrive.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: Corey
 */

#include "CoreyDrive.h"

CoreyDrive::CoreyDrive() {
	// TODO Auto-generated constructor stub

}

CoreyDrive::~CoreyDrive() {
	// TODO Auto-generated destructor stub
}

void CoreyDrive::Drive(frc::Joystick & stick)
{
	myRobot.ArcadeDrive(stick);
}
