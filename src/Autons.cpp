#include "main.h"

//auton function for red side close to goal zone
void RedGoalSide() {
  Drive(1000.0, 100);
}

void RedFarSide() {
    Drive(-1000.0, 100);
}

void BlueGoalSide() {
    Rotate(1000.0, 100);
}

void BlueFarSide() {
    Rotate(-1000.0, 100);
}


//varirables and functions for auton selector
int autonselector = 0;
const char *titles[] = {"RedGoalSide", "RedFarSide", "BlueGoalSide", "BlueFarSide", "SkillsAuton"};
void (*scripts[])() = {&RedGoalSide, &RedFarSide, &BlueGoalSide, &BlueFarSide, &SkillsAuton};

void LCDScriptExecute() {scripts[autonselector]();}
