#include "GPIO_MCAL.H"
#include "TM4C123GH6PM.h"
int main()
{
  
 
  GPIO_INITIALIZATION_T gpio_init;
  gpio_init.GATE=CLOCK_GATE_F;
  gpio_init.PORT_NAME=PORT_F;
  gpio_init.DIGITAL_ENABLE=ENABLE;
  gpio_init.DATA_DIR=DIRECTION_IN;
  gpio_init.PULLTYPE=PULL_UP;
  gpio_init.PIN_NO=4;
  GPIO_INIT(&gpio_init);
 
  
  
  
   GPIO_INITIALIZATION_T gpio_init_w;
   gpio_init_w.GATE=CLOCK_GATE_F;
  gpio_init_w.PORT_NAME=PORT_F;
  gpio_init_w.DIGITAL_ENABLE=ENABLE;
  gpio_init_w.DATA_DIR=DIRECTION_OUT;
  //gpio_init.PULLTYPE=PULL_DOWN;
  gpio_init_w.PIN_NO=2;
  GPIO_INIT(&gpio_init_w);
  
  
  /*
  
  SYSCTL->RCGCGPIO|=(1U<<5);
  
  GPIOF->DIR &=~(1U<<4);
  
  
  GPIOF->PUR |=(1U<<4);
  GPIOF->DEN |=(1U<<4);
    
 */ 
  
  GPIO_READ_T gpio_read;
  // 4
  gpio_read.PIN_NO=4;
  gpio_read.PORT_NAME=PORT_F;
  
  
  
  
  GPIO_WRITE_T gpio_write;
  gpio_write.DATA=0;
  gpio_write.PIN_NO=2;
  gpio_write.PORT_NAME=PORT_F;
  
  
  GPIO_WRITE(&gpio_write);
  
  
  
/* 
  AFSEL_INITIALIZATION_T afsel_init;
  afsel_init.AFSEL=ENABLE_AFSEL;
  afsel_init.GATE=CLOCK_GATE_A;
  afsel_init.PORT_NAME=PORT_A;
  afsel_init.DIGITAL_ENABLE=DISABLE;
  afsel_init.PIN_NO=1;
  
  GPIO_AFSEL_INIT(&afsel_init);
 */
  
  int x;
  while (1)
  {
    
    
    
    x=GPIO_READ(&gpio_read);
    
    if(x==0)
    {
     gpio_write.DATA=1;
     GPIO_WRITE(&gpio_write);
    }
    
    
  
    
    gpio_write.DATA=0;
    GPIO_WRITE(&gpio_write);
   
   
  
   
  } 
  
  
  
  return 0;
}
