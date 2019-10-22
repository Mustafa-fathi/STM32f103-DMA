#include "LSTD_TYPES.h"
#include "MDMA_interface.h"
#include "MDMA_private.h"
//now DMA operates at speed of AHP
void MDMA_Intialize(void)
{
	
	MDMA1 -> DMA_CCR1 = 0x00007AC2;
	MDMA1 -> DMA_CNDTR1 = 1000; //i will transfer 1000 moves
	
	
}


void MDMA_Ch1Start(u32 source , u32 destination)
{
	MDMA1 -> DMA_CPAR1 = (u32)source;   //we make casting beacuse source is pointer and we cant put pointer to varialble
	
	MDMA1 -> DMA_CMAR1=(u32)destination;
	
	MDMA1 -> DMA_CCR1 |=1; //we enable channel 1
}
