#include "mbed.h"

AnalogIn LDRpin(A1);
PwmOut LEDpin(D3);

Serial pc(USBTX, USBRX);
// main() runs in its own thread in the OS
int main()
{
    while (true) {
        float ldr_v,ldr_value;
        ldr_v=LDRpin.read();
        ldr_value = ldr_v*5000;
        pc.printf("LDR value: %f\n",ldr_value);
        if(ldr_value>850){LEDpin.write(0.0);}
        else if(ldr_value>500 && ldr_value<850){LEDpin.write(0.5);}
        else if(ldr_value<200){LEDpin.write(1.0);}
        wait(2);
    }
    return 1;
}

