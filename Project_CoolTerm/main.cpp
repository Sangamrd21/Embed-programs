#include "mbed.h"

BufferedSerial pc(USBTX, USBRX);

// main() runs in its own thread in the OS
int main()
{
    pc.write("Hello World!!\n",12);
}

