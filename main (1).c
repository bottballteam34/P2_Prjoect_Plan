#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    wait_for_light(0);
    shut_down_in(119);
    
    //move forward for three seconds
    mav(1,500);
    mav(0,500);
    msleep(3000);
    
    //turn
    mav(1,500);
    mav(1,-500);
    msleep(1600);
    
    //claw down
    enable_servos();
    set_servo_position(0,800);
    
    //claw close
    set_servo_position(1,1124);
    
    disable_servos();
    return 0;
}
