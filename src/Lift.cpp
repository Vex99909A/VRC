#include "main.h"


//thread for all lift controls
void Lift_fn(void* param) {

  while (true) {

    if (master.get_digital(DIGITAL_L1)) {
      LiftLMotor.move(100);
      LiftRMotor.move(100);
      pros::delay(20);
    }
    else {
      LiftLMotor.move(0);
      LiftRMotor.move(0);
      pros::delay(20);
    }


    if (master.get_digital(DIGITAL_L2)) {
      LiftLMotor.move(-100);
      LiftRMotor.move(-100);
      pros::delay(20);
    }
    else {
      LiftLMotor.move(0);
      LiftRMotor.move(0);
      pros::delay(20);
    }

  }

}
