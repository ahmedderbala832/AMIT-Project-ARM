#ifndef GPIO_MCAL
#define GPIO_MCAL
#include <stdint.h>
typedef enum
{
  PORT_A,
  PORT_B,
  PORT_C,
  PORT_D,
  PORT_E,
  PORT_F
  
} GPIO_PORT_NAME_T;

typedef enum
{
  PORT_A_NO=0,
  PORT_B_NO=1,
  PORT_C_NO=2,
  PORT_D_NO=3,
  PORT_E_NO=4,
  PORT_F_NO=5
  
} GPIO_PORT_NO_T;



typedef enum 

{
  DIRECTION_IN,
  DIRECTION_OUT
  

}  GPIO_DATA_DIR_T;

typedef enum 

{ 
  DISABLE,
  ENABLE
} GPIO_DIGITAL_ENABLING_T;

typedef enum
{
  PULL_DOWN,
  PULL_UP
} GPIO_PULL_RESISTOR_T ;

typedef enum
{ 
CLOCK_GATE_A,
CLOCK_GATE_B,
CLOCK_GATE_C,
CLOCK_GATE_D,
CLOCK_GATE_E,
CLOCK_GATE_F
  
} GPIO_CLOCK_GATING_T;  



typedef enum 
{
  ENABLE_AFSEL,
  DISABLE_AFSEL

} GPIO_AFSEL_T;

typedef struct
{
 
  
 GPIO_CLOCK_GATING_T GATE;
 
 GPIO_PORT_NAME_T PORT_NAME;
 
 GPIO_DIGITAL_ENABLING_T DIGITAL_ENABLE;
    
 GPIO_DATA_DIR_T DATA_DIR;
 
 uint8_t PIN_NO;
 
 GPIO_PULL_RESISTOR_T PULLTYPE;
 

 
} GPIO_INITIALIZATION_T;

typedef struct
{
   
 GPIO_PORT_NAME_T PORT_NAME;
 
 uint8_t PIN_NO;
 
 uint8_t DATA;
 
 
  
} GPIO_WRITE_T;  



typedef struct
{
   
 GPIO_PORT_NAME_T PORT_NAME;
 
 uint8_t PIN_NO;
 
 
 
  
} GPIO_READ_T;



typedef struct 

{
  GPIO_AFSEL_T AFSEL;
  GPIO_CLOCK_GATING_T GATE;
  GPIO_PORT_NAME_T PORT_NAME;
  GPIO_DIGITAL_ENABLING_T DIGITAL_ENABLE;
  uint8_t PIN_NO;
  
  
} AFSEL_INITIALIZATION_T;  

void GPIO_INIT(GPIO_INITIALIZATION_T *GPIO_INIT);
void GPIO_AFSEL_INIT (AFSEL_INITIALIZATION_T *GPIO_AFSEL_INIT);
void GPIO_WRITE(GPIO_WRITE_T *GPIO_WRITE);
uint8_t GPIO_READ(GPIO_READ_T *GPIO_READ);




#endif /*GPIO_MCAL.H*/