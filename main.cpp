#include "mbed.h"

AnalogIn mypotentiometer1 (p19);
AnalogIn mypotentiometer2 (p20);
PwmOut red(p23);
PwmOut green(p24);

float p1, p2;

int main()
{
    while(1) {
        p1 = mypotentiometer1 * 100;
        p2 = mypotentiometer2 * 100;
                {
                red = mypotentiometer1;
                green = mypotentiometer2;  
                }             
    }
}