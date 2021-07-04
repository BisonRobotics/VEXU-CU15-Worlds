#include "robot_config.h"

void op_comp(){
  while(1){
    driveLeft.move(joystick.get_analog(E_CONTROLLER_ANALOG_LEFT_Y));
    driveRight.move(joystick.get_analog(E_CONTROLLER_ANALOG_RIGHT_Y));

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_R1)){
      barrelFront = 127;
      barrelBack = 127;
      intake = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_R2)){
      barrelFront = -127;
      barrelBack = -127;
      intake = -127;
    }else{
      barrelFront = 0;
      barrelBack = 0;
      intake = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_L1)){
      spitter = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_L2)){
      spitter = -127;
    }else{
      spitter = 0;
    }

    if(joystick.get_digital(E_CONTROLLER_DIGITAL_UP)){
      hood = 127;
    }else if(joystick.get_digital(E_CONTROLLER_DIGITAL_DOWN)){
      hood = -127;
    }else{
      hood = 0;
    }
    delay(2);
  }
}
