#include "main.h"

void SkillsAuton(){
    Drive(1000.0, 100);
    pros::delay(20);
    Drive(-1000.0, 100);
    pros::delay(20);
    Rotate(1000.0, 100);
    pros::delay(20);
    Rotate(-1000.0, 100);
    pros::delay(20);
}
