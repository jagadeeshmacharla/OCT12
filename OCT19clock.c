/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-19, 09:45, # CodeGen: 0
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
				int mm=50,ss=20;
				int M1,M0,S1,S0;
				//int mm=50,ss=20;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
//k=0;
 //int jaga[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x00,0x90};
//int i,j,k,l,mm=50,ss=30;
  while(1)
	{
	
	
	S1=ss/10;/*2*/
	S0=ss%10;/*0*/

	M1=mm/10;/*5*/
	M0=mm%10;/*0*/

	
	
	
	
	Mux7(M1,M0,S1,S0);
	ss++;/*20 is increased*/
	if(ss==59)
	{
		mm++;
		ss=0;
	}
	
	}

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
}  
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/


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
/*int main(void)*/
/*lint -restore Enable MISRA rule (6.3) checking. */
/*{
  /* Write your local variable definition here */
/*unsigned char j =0,l,m,n;
int i,k;
  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  /*PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */

/*int  jaga[]={0x40,0xf9,0xa4,0xb0,0x99,0x92,0x02,0xf8,0x00,0x90};


while(1)
{
	/*Bits1_PutVal(0xF9);
	 			Bits1_PutVal(0xb0);
						Bits1_PutVal(0xb0);
						Bits1_PutVal(0xb0);
						Bits1_PutVal(0xb0);
						for(i=0;i<0x7ffff;i++);
						Bits1_PutVal(0x99);
									Bits1_PutVal(0x99);
									Bits1_PutVal(0x99);
									Bits1_PutVal(0x99);
								for(i=0;i<0x7ffff;i++);*/
	/*Bits1_PutVal(0xf9);
	Bits2_PutVal(0xFE);
	
	for(i=0;i<0x7ff;i++);	    
	
	Bits1_PutVal(0xA4);	
	Bits2_PutVal(0xFD);
	
	    for(i=0;i<0x7ff;i++);
		
	    Bits1_PutVal(0xB0);
		Bits2_PutVal(0xFB);
		
		    for(i=0;i<0x7ff;i++);
			
		    Bits1_PutVal(0x99);
			Bits2_PutVal(0xF7);
			
			    for(i=0;i<0x7ff;i++);*/
/*	for(j=0;j<10;j++)
	{
		Bits1_PutVal(jaga[j]);
		Bits2_PutVal(0xf7);
	for(i=0;i<0x7ffff;i++);
	*/
		/*for(j=0;j<10;j++)
			{
				Bits1_PutVal(jaga[j]);
				Bits2_PutVal(0xf7);
				for(i=0;i<0x7ffff;i++);
				  }*/
   	   	
	/*	for(k=0;k<100;k++)
		{				  
			Bits1_PutVal(0x40);
			Bits2_PutVal(0xfe);
			for(i=0;i<0x7ff;i++);
			
			
			Bits1_PutVal(0x40);
			Bits2_PutVal(0xfd);
			for(i=0;i<0x7ff;i++);
			
			
			Bits1_PutVal(0x40);
			Bits2_PutVal(0xfb);
			for(i=0;i<0x7ff;i++);
			
			
			
			Bits1_PutVal(jaga[j]);
			Bits2_PutVal(0xf7);
			for(i=0;i<0x7ff;i++);
		
		
		
		
		
		
		
		}
		j++;*/
	

	//a3();
	//a4();
	
	

	
	/*for(k=0;k<100;k++)
			{				  
		
		       Bits1_PutVal(0x40);		
				Bits2_PutVal(0xfe);
				m=SegOne;
				n=mux7[first];
				for(i=0;i<0x7ff;i++);
				
				
				Bits1_PutVal(0x40);
				Bits2_PutVal(0xfd);
				m=SegOne;
							n=mux7[second];
				for(i=0;i<0x7ff;i++);
				
				
				Bits1_PutVal(0x40);
				Bits2_PutVal(0xfb);
				m=SegOne;
							n=mux7[third];
				for(i=0;i<0x7ff;i++);
				
				
				
				Bits1_PutVal(jaga[j]);
				Bits2_PutVal(0xf7);
				m=SegOne;
				n=mux7[fourth];
				for(i=0;i<0x7ff;i++);
			
			
			
			
			
			
			
			}
			j++;
	
}	
	
	
	
}


	
	
	
	//for(i=0;i<0x7ff;i++);
//	Bits1_PutVal(0xa4);
//	for(i=0;i<0x7ff;i++);
	//Bits1_PutVal(0xb0);
	//for(i=0;i<0x7ff;i++);
	//Bits1_PutVal(0x99);
	//for(i=0;i<0x7ff;i++);


  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
 /* #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  /*#endif*/
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/

  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
 /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

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
