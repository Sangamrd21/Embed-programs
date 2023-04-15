#include "mbed.h"

DigitalOut A(D2);
DigitalOut B(D3);
DigitalOut C(D4);
DigitalOut D(D5);
DigitalOut E(D6);
DigitalOut F(D7);
DigitalOut G(D8);
DigitalIn btn(BUTTON1);

void Display(int disp){
    switch(disp){
        case 0: A=0;B=0;C=0;D=0;E=0;F=0;G=1; break;
        case 1: A=1;B=0;C=0;D=1;E=1;F=1;G=1; break;
        case 2: A=0;B=0;C=1;D=0;E=0;F=1;G=0; break;
        case 3: A=0;B=0;C=0;D=0;E=1;F=1;G=0; break;
        case 4: A=1;B=0;C=0;D=1;E=1;F=0;G=0; break;
        case 5: A=0;B=1;C=0;D=0;E=1;F=0;G=0; break;
        case 6: A=0;B=1;C=0;D=0;E=0;F=0;G=0; break;
        case 7: A=0;B=0;C=0;D=1;E=1;F=1;G=1; break;
        case 8: A=0;B=0;C=0;D=0;E=0;F=0;G=0; break;
        case 9: A=0;B=0;C=0;D=0;E=1;F=0;G=0; break;
    }
}

int is_button_pressed(){
    return btn.read();
}

// main() runs in its own thread in the OS
int main()
{
    int i=0;
    while (true) {

        if(i>9){i=0;}
        else if(is_button_pressed()==0){
            Display(i);
            wait_us(250000);
            i++;
        }
    }
}

