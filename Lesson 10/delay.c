#include "delay.h"

void delay(iter){
  
  int volatile counter = 0;
    
   while(counter < iter){
      ++counter;
      }
 }