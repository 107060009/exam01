#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);

PwmOut PWM1(D6);

AnalogOut Aout(D7);

int sample = 128;

int main()

{

      uLCD.printf("107060009\n"); //Default Green on black text

      uLCD.line(30, 30 , 60, 30, 0xFFFFFF);
      uLCD.line(30, 30 , 30, 60, 0xFFFFFF);
      uLCD.line(60, 30 , 60, 60, 0xFFFFFF);
      uLCD.line(30, 60 , 60, 60, 0xFFFFFF);

      PWM1.period(0.001);

      PWM1 = 0.5;

      for(int i = 0 ; i<sample ; i++){

        ADCdata[i] = Aout;

        wait(0.1); 

  }

}
