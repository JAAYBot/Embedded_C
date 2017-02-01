#include "lm4f120h5qr.h"
#define LED_RED (1u << 1)
#define LED_BLUE (1u << 2)
#define LED_GREEN (1u << 3)

int main(){
              
    SYSCTL_RCGCGPIO_R |= (1u << 5);
    SYSCTL_GPIOHBCTL_R |= (1u << 5);
    GPIO_PORTF_AHB_DIR_R |= (LED_RED | LED_BLUE | LED_GREEN);
    GPIO_PORTF_AHB_DEN_R |= (LED_RED | LED_BLUE | LED_GREEN);
    
    //GPIO_PORTF_DATA_R |= LED_BLUE;
    GPIO_PORTF_AHB_DATA_BITS_R[LED_BLUE] = LED_BLUE;
    while(1){
    
    //GPIO_PORTF_DATA_R |= LED_RED;
    //*((unsigned long volatile *)(0x40025000 + (LED_RED << 2))) = LED_RED;
    //*(GPIO_PORTF_DATA_BITS_R + LED_RED) = LED_RED;
    GPIO_PORTF_AHB_DATA_BITS_R[LED_RED] = LED_RED; 
        
    int volatile counter[2] = {0,0};
    
    while(counter[0] < 1000000){
      ++counter[0];
      }
    
    GPIO_PORTF_AHB_DATA_BITS_R[LED_RED] = 0;
    
    
    //counter = 0;
    while(*(counter + 1) < 1000000){
      ++counter[1];
      }
    
    }
    
  return 0;
}
