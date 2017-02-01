
int main(){
  
             
    *((unsigned int *)0x400FE608u) = 0x20u;
    *((unsigned int *)0x40025400u) = 0x0Eu;
    *((unsigned int *)0x4002551Cu) = 0x0Eu;
    
    while(1){
    
    *((unsigned int *)0x400253FCu) = 0x02;
    
    
    int counter1 = 0;
    while(counter1 < 1000000){
      ++counter1;
      }
    
    *((unsigned int *)0x400253FCu) = 0x00;
   
    
    int counter2 = 0;
    while(counter2 < 1000000){
      ++counter2;
      }
    
    }
    
  return 0;
}
