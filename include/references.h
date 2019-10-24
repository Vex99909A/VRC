//define all motor ports constant variables here
/*drive motor ports*/
#define FLMotorPort 1
#define FRMotorPort 10
#define BLMotorPort 9
#define BRMotorPort 6
/*lift motor ports*/
#define LiftLMotorPort 7
#define LiftRMotorPort 3


//define all sensor ports constant variables here
/**
#define GyroPort 1
**/

 //declare global motor object variables here
extern pros::Motor FLMotor;
extern pros::Motor FRMotor;
extern pros::Motor BLMotor;
extern pros::Motor BRMotor;

//declare lift motor object variables here
extern pros::Motor LiftLMotor;
extern pros::Motor LiftRMotor;

 //declare global controller object variable here
extern pros::Controller master;
extern pros::Controller partner;

//declare global sensor object variables here
/**
extern pros::ADIGyro gyro;
**/

//declare global variables that map controller joysticks for drivetrain variables
extern int LeftControl;
extern int RightControl;
extern int power;
extern int turn;

//declare drive train function prototype
/*drive train task thread function prototype*/
void DriveTrain_fn(void* param);
/*drive train functions*/
void Drive(double distance, int speed);
void Rotate(double distance, int speed);


//declare lift function prototype
void Lift_fn(void* param);



//declare functions for antonomous.cpp
/* function for red alliance side close to goal zone*/
void RedGoalSide();
void RedFarSide();
void BlueGoalSide();
void BlueFarSide();

void SkillsAuton();
/* variables and functions for auton selector */
extern int autonselector;
extern const char *titles[5];
extern void (*scripts[5])();

void LCDScriptExecute();
