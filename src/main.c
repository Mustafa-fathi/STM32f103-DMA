/*
 * main.c
 *
 *  Created on: Jul 23, 2018
 *      Author: Hampota
 */
/*
 *in this code we try to make a compare between DMA and processor
 * both of them will try to move data from array to another array
 * finally we will know which of them will finish first
 * so led will be on
 *
 * */
#include "LSTD_TYPES.h"
#include "MDIO_interface.h"
#include "MRCC_interface.h"
#include "MDMA_interface.h"
#include "MNVK_interface.h"


void main()
{
	u32 source[1000]={0};
	u32 destination[1000];
	u16 i=0;

	MRCC_Initialize();
	MRCC_EnableClock(BUS_AHB,PERIPHERAL_DMA1);
	MRCC_EnableClock(BUS_ABP2,PERIPHERAL_GPIOA);
	MDIO_Initialize();
	MDMA_Intialize();
    MNVK_EnableInt(11);  //11 MDMA CHANNEL1
    MDMA_Ch1Start(source,destination);  //MDMA start transfering

    for (i=0 ; i<1000 ; i++)
    {
    	destination[i]=source[i]; //processor start transfering
    }

   MDIO_set_pin(MDIO_PORTA,0) ;  //led on A0 will be on after processor finish execution

  while(1)
    {

    }
}

void DMA1_Channel1_IRQHandler(void)
{
	 MDIO_set_pin(MDIO_PORTA,1) ; //led on A1 will be on after DMA finish execution
}

