#include "lm4f120h5qr.h"
#define LED_RED (1u << 1)
#define LED_BLUE (1u << 2)
#define LED_GREEN (1u << 3)

void delay(int iter);

void delay(iter){
  
  int volatile counter = 0;
    
   while(counter < iter){
      ++counter;
      }
 }

int main(){
              
    SYSCTL_RCGCGPIO_R |= (1u << 5);
    SYSCTL_GPIOHBCTL_R |= (1u << 5);
    GPIO_PORTF_AHB_DIR_R |= (LED_RED | LED_BLUE | LED_GREEN);
    GPIO_PORTF_AHB_DEN_R |= (LED_RED | LED_BLUE | LED_GREEN);
    
    GPIO_PORTF_AHB_DATA_BITS_R[LED_BLUE] = LED_BLUE;
    
    while(1){
    
    GPIO_PORTF_AHB_DATA_BITS_R[LED_RED] = LED_RED; 
        
    delay(1000000);
    
    GPIO_PORTF_AHB_DATA_BITS_R[LED_RED] = 0;
    
    delay(500000);
    
    }
    
  return 0;
}
