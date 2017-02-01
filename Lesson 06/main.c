#include "lm4f120h5qr.h"

#define LED_RED (1u << 1)
#define LED_BLUE (1u << 2)
#define LED_GREEN (1u << 3)

int main(){
  
             
    SYSCTL_RCGCGPIO_R |= 0x20u;
    GPIO_PORTF_DIR_R |= (LED_RED | LED_BLUE | LED_GREEN);
    GPIO_PORTF_DEN_R |= (LED_RED | LED_BLUE | LED_GREEN);
    
    GPIO_PORTF_DATA_R |= LED_BLUE;
    
    while(1){
    
    GPIO_PORTF_DATA_R |= LED_RED;
    
    
    int volatile counter = 0;
    
    while(counter < 1000000){
      ++counter;
      }
    
    GPIO_PORTF_DATA_R &= ~LED_RED;
   
    
    counter = 0;
    while(counter < 1000000){
      ++counter;
      }
    
    }
    
  return 0;
}
