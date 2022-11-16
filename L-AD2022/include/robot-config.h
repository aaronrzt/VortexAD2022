using namespace vex;

extern brain Brain;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */

// VEXcode devices
extern motor LeftFrontMotor;
extern motor LeftBackMotor;
extern motor RightFrontMotor;
extern motor RightBackMotor;

extern motor LauncherLF;
extern motor LauncherLB;
extern motor LauncherRF;
extern motor LauncherRB;

extern motor_group LauncherLeft;
extern motor_group LauncherRight;

extern controller Controller1;
extern int rc_auto_loop_function_Controller1();

void vexcodeInit(void);
