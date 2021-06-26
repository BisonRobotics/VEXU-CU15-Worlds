#include "api.h"

using namespace pros;

Controller joystick(E_CONTROLLER_MASTER);

//drive motors
Motor driveFrontLeft(13);
Motor driveFrontRight(14, true);
Motor driveBackLeft(17);
Motor driveBackRight(12, true);

Motor driveLeft[]{driveFrontLeft, driveBackLeft};
Motor driveRight[]{driveFrontRight, driveBackRight};

//intake and barrels
Motor intakeRight(1, true);
Motor intakeLeft(7);
Motor intake[]{intakeLeft, intakeRight};

Motor barrelFrontLeft(6, true);
Motor barrelFrontRight(11);
Motor barrelBack(20, true);
Motor barrelFront[]{barrelFrontLeft, barrelFrontRight};

//hood and spitter
Motor hood(4, true);
Motor spitterLeft(5);
Motor spitterRight(19, true);
Motor spitter[]{spitterLeft, spitterRight};
