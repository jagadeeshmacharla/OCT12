/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-19, 14:27, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Bit1.h"
#include "BitIoLdd1.h"
#include "Bit2.h"
#include "BitIoLdd2.h"
#include "Bit3.h"
#include "BitIoLdd3.h"
#include "Bits1.h"
#include "BitsIoLdd1.h"
#include "Bits2.h"
#include "BitsIoLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
Mux7(int M1,int M0,int S1,int S0)
{
	int i,j,k;
	int arr[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x00,0x90};
	for(i=0;i<100;i++)
	{
		Bits2_PutVal(0xfe);
		Bits1_PutVal(arr[M1]);
		for(j=0;j<0x7ff;j++);
		
		Bits2_PutVal(0xfd);
		Bits1_PutVal(arr[M0]);
		for(j=0;j<0x7ff;j++);
		
		Bits2_PutVal(0xfb);
		Bits1_PutVal(arr[S1]);
		for(j=0;j<0x7ff;j++);
		
		
		
		Bits2_PutVal(0xf7);
		Bits1_PutVal(arr[S0]);
		for(j=0;j<0x7ff;j++);
		
	}
}
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */
	int mm=00,ss=00;
	int M1,M0,S1,S0;
	  M1=mm/10;
	  M0=mm%10;
	  S1=ss/10;
	  S0=ss%10;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
				while(1)
				{
				
				if(Bit1_GetVal()==0)
				{
				mm++;
				M1=mm/10;
				M0=mm%10;
				
				Mux7(M1,M0,S1,S0);
				
				}
				if(Bit2_GetVal()==0)
				{
				ss++;
				S1=ss/10;
				S0=ss%10;
				
				Mux7(M1,M0,S1,S0);
				
				}
				
				
				
				if(Bit3_GetVal()==0)
				{
				while(mm<100)
				{
				
				Mux7(M1,M0,S1,S0);
				ss++;
				if(ss==59)
				{
				mm++;
				ss=0;
				}
				M1=mm/10;
				M0=mm%10;
				S1=ss/10;
				S0=ss%10;
				
				}
				}
				else
				{
				Mux7(M1,M0,S1,S0);
				}
				
				}




	  
	  
	  
  
  	
  	
    
  

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
