#include "lm4f120h5qr.h"
/*
#define RCGCGPIO (*((unsigned int *)0x400FE608u))
#define GPIOF_BASE 0x40025000u
#define GPIOF_DIR (*((unsigned int *)(GPIOF_BASE + 0x400u)))
#define GPIOF_DEN (*((unsigned int *)(GPIOF_BASE + 0x51Cu)))
#define GPIOF_DATA (*((unsigned int *)(GPIOF_BASE + 0x3FCu)))
*/

int main(){
  
             
    SYSCTL_RCGCGPIO_R = 0x20u;
    GPIO_PORTF_DIR_R = 0x0Eu;
    GPIO_PORTF_DEN_R = 0x0Eu;
    
    while(1){
    
    GPIO_PORTF_DATA_R = 0x02;
    
    
    int volatile counter = 0;
    
    while(counter < 1000000){
      ++counter;
      }
    
    GPIO_PORTF_DATA_R = 0x00;
   
    
    counter = 0;
    while(counter < 1000000){
      ++counter;
      }
    
    }
    
  return 0;
}
