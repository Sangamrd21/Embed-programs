#include "mbed.h"

DigitalOut ledPin(LED1);
DigitalIn butn(BUTTON1);
// main() runs in its own thread in the OS
int main()
{
    while (true) {
        int b;
        b = butn.read();
        if(b==0){ledPin.write(1);}
        else{ledPin.write(0);}
        //ledPin.write(0);
        //ledPin = !(butn);
    }
}

