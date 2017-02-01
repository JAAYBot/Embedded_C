#include "lm4f120h5qr.h"
#include "delay.h"
#define LED_RED (1u << 1)
#define LED_BLUE (1u << 2)
#define LED_GREEN (1u << 3)

unsigned fact(unsigned n);

int main(){
              
    unsigned volatile x;
    x = fact(5u);
      
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

unsigned fact(unsigned n){

  if(n == 0u){
    return 1u;
  }
  else{
    return n * fact(n - 1);
  }

}