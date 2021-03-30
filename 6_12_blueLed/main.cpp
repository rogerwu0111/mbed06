#include "mbed.h"

using namespace std::chrono;


Ticker flipper;

DigitalOut led1(LED3);


void flip()

{

   led1 = !led1;

}


int main()

{

   led1 = 1;

   flipper.attach(&flip, 250ms); // the address of the function to be attached (flip) and the interval (2 seconds)

}