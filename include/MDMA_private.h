#ifndef _MDMA_PRIVATE_H
#define _MDMA_PRIVATE_H

typedef struct{
	
	volatile u32 DMA_ISR ;  //interrupt
	volatile u32 DMA_IFCR;
	
	volatile u32 DMA_CCR1;
	volatile u32 DMA_CNDTR1;
	volatile u32 DMA_CPAR1;
	volatile u32 DMA_CMAR1;
	
	volatile u32 DMA_CCR2;
	volatile u32 DMA_CNDTR2;
	volatile u32 DMA_CPAR2;
	volatile u32 DMA_CMAR2;
	
	volatile u32 DMA_CCR3;
	volatile u32 DMA_CNDTR3;
	volatile u32 DMA_CPAR3;
	volatile u32 DMA_CMAR3;
	
	volatile u32 DMA_CCR4;
	volatile u32 DMA_CNDTR4;
	volatile u32 DMA_CPAR4;
	volatile u32 DMA_CMAR4;
	
	volatile u32 DMA_CCR5;
	volatile u32 DMA_CNDTR5;
	volatile u32 DMA_CPAR5;
	volatile u32 DMA_CMAR5;
	
	volatile u32 DMA_CCR6;
	volatile u32 DMA_CNDTR6;
	volatile u32 DMA_CPAR6;
	volatile u32 DMA_CMAR6;
	
	volatile u32 DMA_CCR7;
	volatile u32 DMA_CNDTR7;
	volatile u32 DMA_CPAR7;
	volatile u32 DMA_CMAR7;
}MDMA_type;

#define MDMA1 ((volatile MDMA_type *)0x40020000)
#define MDMA2 ((volatile MDMA_type *)0x40020400)

#endif
