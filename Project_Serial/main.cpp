#include "mbed.h"

Serial pc(USBTX, USBRX);

AnalogIn LDRpin(A1);

// main() runs in its own thread in the OS
int main()
{
    float ldr_value;

    while(true){
        ldr_value = LDRpin.read();
        pc.printf("Printing the value of LDR = %f \n", ldr_value);
        wait_us(2000000);
    }
    return 1;
}
