#include "GPIO_MCAL.H"
#include "TM4C123GH6PM.h"
void GPIO_INIT(GPIO_INITIALIZATION_T *GPIO_INIT)

{
switch(GPIO_INIT->GATE)
{
case CLOCK_GATE_A : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_A_NO);  
  } 
  break;

case CLOCK_GATE_B : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_B_NO);  
  } 
  break;

case CLOCK_GATE_C : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_C_NO);  
  } 
  break;
  
 case CLOCK_GATE_D : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_D_NO);  
  } 
  break;

  
 case CLOCK_GATE_E : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_E_NO);  
  } 
  break;

 case CLOCK_GATE_F : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_F_NO);  
  } 
  break;
 
  
}


switch(GPIO_INIT->PORT_NAME)
{
case PORT_A:
  {
   if(GPIO_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOA->DEN |=(1U<<GPIO_INIT->PIN_NO); 
   }
   else 
   {
    GPIOA->DEN &=~(1U<<GPIO_INIT->PIN_NO); 
   }
   
   if(GPIO_INIT->DATA_DIR==DIRECTION_IN)
   {
    GPIOA->DIR &= ~(1U<<GPIO_INIT->PIN_NO);
     {
       if (GPIO_INIT->PULLTYPE == PULL_DOWN)
       {
        GPIOA->PDR |= (1U<<GPIO_INIT->PIN_NO);
       }
       else 
       {
         GPIOA->PUR |= (1U<<GPIO_INIT->PIN_NO);
       }  
  
     }
   
   }
   else
   {
     GPIOA->DIR |= (1U<<GPIO_INIT->PIN_NO);
   }
  }
  break;
  
  
  
  
  case PORT_B:
  {
   if(GPIO_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOB->DEN &=~(1U<<GPIO_INIT->PIN_NO); 
   }
   else 
   {
   }
   
   if(GPIO_INIT->DATA_DIR==DIRECTION_IN)
   {
    GPIOB->DIR &= ~(1U<<GPIO_INIT->PIN_NO);
     {
       if (GPIO_INIT->PULLTYPE == PULL_DOWN)
       {
        GPIOB->PDR |= (1U<<GPIO_INIT->PIN_NO);
       }
       else 
       {
         GPIOB->PUR |= (1U<<GPIO_INIT->PIN_NO);
       }  
  
     }
   
   }
   else
   {
     GPIOB->DIR |= (1U<<GPIO_INIT->PIN_NO);
   }
  }
  break;

  
  
  
  
 case PORT_C:
  {
   if(GPIO_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOC->DEN |=(1U<<GPIO_INIT->PIN_NO); 
   }
   else 
   {
     GPIOD->DEN &=~(1U<<GPIO_INIT->PIN_NO); 
   }
   
   if(GPIO_INIT->DATA_DIR==DIRECTION_IN)
   {
    GPIOC->DIR &= ~(1U<<GPIO_INIT->PIN_NO);
     {
       if (GPIO_INIT->PULLTYPE == PULL_DOWN)
       {
        GPIOC->PDR |= (1U<<GPIO_INIT->PIN_NO);
       }
       else 
       {
         GPIOC->PUR |= (1U<<GPIO_INIT->PIN_NO);
       }  
  
     }
   
   }
   else
   {
     GPIOC->DIR |= (1U<<GPIO_INIT->PIN_NO);
   }
  }
  break;
 
  
  
  
  
  
  
  case PORT_D:
  {
   if(GPIO_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOD->DEN |=(1U<<GPIO_INIT->PIN_NO); 
   }
   else 
   {
     GPIOD->DEN &=~(1U<<GPIO_INIT->PIN_NO); 
   }
   
   if(GPIO_INIT->DATA_DIR==DIRECTION_IN)
   {
    GPIOD->DIR &= ~(1U<<GPIO_INIT->PIN_NO);
     {
       if (GPIO_INIT->PULLTYPE == PULL_DOWN)
       {
        GPIOD->PDR |= (1U<<GPIO_INIT->PIN_NO);
       }
       else 
       {
         GPIOD->PUR |= (1U<<GPIO_INIT->PIN_NO);
       }  
  
     }
   
   }
   else
   {
     GPIOD->DIR |= (1U<<GPIO_INIT->PIN_NO);
   }
  }
  break;

  
  
  
  
  case PORT_E:
  {
   if(GPIO_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOE->DEN |=(1U<<GPIO_INIT->PIN_NO); 
   }
   else 
   {
     GPIOF->DEN &=~(1U<<GPIO_INIT->PIN_NO);
   }
   
   if(GPIO_INIT->DATA_DIR==DIRECTION_IN)
   {
    GPIOE->DIR &= ~(1U<<GPIO_INIT->PIN_NO);
     {
       if (GPIO_INIT->PULLTYPE == PULL_DOWN)
       {
        GPIOE->PDR |= (1U<<GPIO_INIT->PIN_NO);
       }
       else 
       {
         GPIOE->PUR |= (1U<<GPIO_INIT->PIN_NO);
       }  
  
     }
   
   }
   else
   {
     GPIOE->DIR |= (1U<<GPIO_INIT->PIN_NO);
   }
  }
  break;

  
  
 case PORT_F:
  {
   if(GPIO_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOF->DEN |=(1U<<GPIO_INIT->PIN_NO); 
   }
   else 
   {
    GPIOF->DEN &=~(1U<<GPIO_INIT->PIN_NO);
   }
   
   if(GPIO_INIT->DATA_DIR==DIRECTION_IN)
   {
    GPIOF->DIR &= ~(1U<<GPIO_INIT->PIN_NO);
     {
       if (GPIO_INIT->PULLTYPE == PULL_DOWN)
       {
        GPIOF->PDR |= (1U<<GPIO_INIT->PIN_NO);
       }
       else 
       {
         GPIOF->PUR |= (1U<<GPIO_INIT->PIN_NO);
       }  
  
     }
   
   }
   else
   {
     GPIOF->DIR |= (1U<<GPIO_INIT->PIN_NO);
   }
  }
  break;
 
  
  
  
  
  
  

}  
}  
void GPIO_WRITE(GPIO_WRITE_T *GPIO_WRITE)
{
  if (GPIO_WRITE->DATA ==0)
  {
    switch (GPIO_WRITE->PORT_NAME)
    {
    case PORT_A:
      {
       GPIOA->DATA &=~(1U<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      case PORT_B:
      {
       GPIOB->DATA &=~(1U<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      
      case PORT_C:
      {
       GPIOC->DATA &=~(1U<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      
      case PORT_D:
      {
       GPIOD->DATA &=~(1U<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      case PORT_E:
      {
       GPIOE->DATA &=~(1U<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      case PORT_F:
      {
       GPIOF->DATA &=~(1U<<GPIO_WRITE->PIN_NO);
      }
      break;
      
    }
    
  } 
  else 
  {
     switch (GPIO_WRITE->PORT_NAME)
    {
    case PORT_A:
      {
       GPIOA->DATA |=(GPIO_WRITE->DATA<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      case PORT_B:
      {
       GPIOB->DATA |=(GPIO_WRITE->DATA<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      
      case PORT_C:
      {
       GPIOC->DATA |=(GPIO_WRITE->DATA<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      
      case PORT_D:
      {
       GPIOD->DATA |=(GPIO_WRITE->DATA<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      case PORT_E:
      {
       GPIOE->DATA |=(GPIO_WRITE->DATA<<GPIO_WRITE->PIN_NO);
      }
      break;
      
      case PORT_F:
      {
       GPIOF->DATA |=(GPIO_WRITE->DATA<<GPIO_WRITE->PIN_NO);
      }
      break;
      
    }
  
  } 
}
uint8_t GPIO_READ(GPIO_READ_T *GPIO_READ)
{
  uint8_t data=0; 
  
  switch (GPIO_READ->PORT_NAME)
  {
 case PORT_A:
    {
    if (GPIOA->DATA & (1U<<GPIO_READ->PIN_NO))
    {
      data=1;
    } 
    else 
    {
      data=0;
    }
    } 
    break;
    
 case PORT_B:
    {
    if (GPIOB->DATA & (1U<<GPIO_READ->PIN_NO))
    {
      data=1;
    } 
    else 
    {
      data=0;
    }
    } 
    break;    
    
    
    
  case PORT_C:
    {
    if (GPIOC->DATA & (1U<<GPIO_READ->PIN_NO))
    {
      data=1;
    } 
    else 
    {
      data=0;
    }
    } 
    break;
    
    
     case PORT_D:
    {
    if (GPIOD->DATA & (1U<<GPIO_READ->PIN_NO))
    {
      data=1;
    } 
    else 
    {
      data=0;
    }
    } 
    break;
    
    
   case PORT_E:
    {
    if (GPIOE->DATA & (1U<<GPIO_READ->PIN_NO))
    {
      data=1;
    } 
    else 
    {
      data=0;
    }
    } 
    break;
    
    
  case PORT_F:
    {
    if (GPIOF->DATA & (1U<<GPIO_READ->PIN_NO))
    {
      data=1;
    } 
    else 
    {
      data=0;
    }
    } 
    break;
    
  }
 return data; 
}

void GPIO_AFSEL_INIT (AFSEL_INITIALIZATION_T *GPIO_AFSEL_INIT)
{
  if(GPIO_AFSEL_INIT->AFSEL==ENABLE_AFSEL)
  {
    
    
    
    switch(GPIO_AFSEL_INIT->GATE)
{
case CLOCK_GATE_A : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_A_NO);  
  } 
  break;

case CLOCK_GATE_B : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_B_NO);  
  } 
  break;

case CLOCK_GATE_C : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_C_NO);  
  } 
  break;
  
 case CLOCK_GATE_D : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_D_NO);  
  } 
  break;

  
 case CLOCK_GATE_E : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_E_NO);  
  } 
  break;

 case CLOCK_GATE_F : 
  {
  SYSCTL->RCGCGPIO|=(1U<<PORT_F_NO);  
  } 
  break;
 
  
}


  switch(GPIO_AFSEL_INIT->PORT_NAME)
{
case PORT_A:
  {
    
   
   if(GPIO_AFSEL_INIT->DIGITAL_ENABLE==ENABLE)
   {
    
    GPIOA->DEN |=(1U<<GPIO_AFSEL_INIT->PIN_NO); 
    GPIOA->AFSEL |=(1U<<GPIO_AFSEL_INIT->PIN_NO);  
   }
   else 
   {
    GPIOA->DEN &=~(1U<<GPIO_AFSEL_INIT->PIN_NO); 
   }
  
   
   
  } 
  
 
  
  
  break;

  
 case PORT_B:
  {
    
   
   if(GPIO_AFSEL_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOB->DEN |=(1U<<GPIO_AFSEL_INIT->PIN_NO);
    GPIOB->AFSEL |=(1U<<GPIO_AFSEL_INIT->PIN_NO);
   }
   else 
   {
    GPIOB->DEN &=~(1U<<GPIO_AFSEL_INIT->PIN_NO); 
   }
   
     
  }
  break;
 
   case PORT_C:
  {
   
   if(GPIO_AFSEL_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOC->DEN |=(1U<<GPIO_AFSEL_INIT->PIN_NO); 
    GPIOC->AFSEL |=(1U<<GPIO_AFSEL_INIT->PIN_NO);
   }
   else 
   {
    GPIOC->DEN &=~(1U<<GPIO_AFSEL_INIT->PIN_NO); 
   }
   
    
  } break;
 
  
  case PORT_D:
  {
     
   if(GPIO_AFSEL_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOD->DEN |=(1U<<GPIO_AFSEL_INIT->PIN_NO);
    GPIOD->AFSEL |=(1U<<GPIO_AFSEL_INIT->PIN_NO);
   }
   else 
   {
    GPIOD->DEN &=~(1U<<GPIO_AFSEL_INIT->PIN_NO); 
   }
   
   
   
  } break;
  
  case PORT_E:
  {
    
   if(GPIO_AFSEL_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOE->DEN |=(1U<<GPIO_AFSEL_INIT->PIN_NO);
    GPIOE->AFSEL |=(1U<<GPIO_AFSEL_INIT->PIN_NO); 
   }
   else 
   {
    GPIOE->DEN &=~(1U<<GPIO_AFSEL_INIT->PIN_NO); 
   }
  } break;

  case PORT_F:
  {
   if(GPIO_AFSEL_INIT->DIGITAL_ENABLE==ENABLE)
   {
    GPIOF->DEN |=(1U<<GPIO_AFSEL_INIT->PIN_NO);
    GPIOF->AFSEL |=(1U<<GPIO_AFSEL_INIT->PIN_NO); 
   }
   else 
   {
    GPIOF->DEN &=~(1U<<GPIO_AFSEL_INIT->PIN_NO); 
   }
  } break;
 
    
  }  
}
else 
{

}  
  
}