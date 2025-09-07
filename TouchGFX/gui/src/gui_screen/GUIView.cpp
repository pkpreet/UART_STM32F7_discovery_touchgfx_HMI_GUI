#include <gui/gui_screen/GUIView.hpp>

#include "main.h"						//for accessing HAL library functions

#define F7ID 	0xAA					//F7 discovery board ID
#define Stop 	0x00					//Stop command
#define Sound1	0x01					//Sound 1 command
#define Sound2	0x02					//Sound 2 command
#define Sound3	0x03					//Sound 3 command
#define Sound4	0x04					//Sound 4 command

uint8_t TxBuffer[3];					//buffer to transmit data

extern UART_HandleTypeDef huart6;		//for accessing UART peripheral


GUIView::GUIView()
{

}

void GUIView::setupScreen()
{
    GUIViewBase::setupScreen();
}

void GUIView::tearDownScreen()
{
    GUIViewBase::tearDownScreen();
}


//---Costume Functions----------------------------------------------------------------------
void GUIView::StopSound()												//function body to stop all sounds
{
	TxBuffer[0] = F7ID;													//F7 discovery board ID
	TxBuffer[1]	= Stop;													//send stop command
	TxBuffer[2] = ~(TxBuffer[0] ^ TxBuffer[1]);							//error checking

	HAL_UART_Transmit_IT(&huart6, TxBuffer, (sizeof(TxBuffer)));		//transmit data to F1 MCU
}

void GUIView::PlaySound1()												//function body to play sound 1
{
	TxBuffer[0] = F7ID;													//F7 discovery board ID
	TxBuffer[1]	= Sound1;												//send sound 1 command
	TxBuffer[2] = ~(TxBuffer[0] ^ TxBuffer[1]);							//error checking

	HAL_UART_Transmit_IT(&huart6, TxBuffer, (sizeof(TxBuffer)));		//transmit data to F1 MCU
}

void GUIView::PlaySound2()												//function body to play sound 2
{
	TxBuffer[0] = F7ID;													//F7 discovery board ID
	TxBuffer[1]	= Sound2;												//send sound 2 command
	TxBuffer[2] = ~(TxBuffer[0] ^ TxBuffer[1]);							//error checking

	HAL_UART_Transmit_IT(&huart6, TxBuffer, (sizeof(TxBuffer)));		//transmit data to F1 MCU
}

void GUIView::PlaySound3()												//function body to play sound 3
{
	TxBuffer[0] = F7ID;													//F7 discovery board ID
	TxBuffer[1]	= Sound3;												//send sound 3 command
	TxBuffer[2] = ~(TxBuffer[0] ^ TxBuffer[1]);							//error checking

	HAL_UART_Transmit_IT(&huart6, TxBuffer, (sizeof(TxBuffer)));		//transmit data to F1 MCU
}

void GUIView::PlaySound4()												//function body to play sound 4
{
	TxBuffer[0] = F7ID;													//F7 discovery board ID
	TxBuffer[1]	= Sound4;												//send sound 4 command
	TxBuffer[2] = ~(TxBuffer[0] ^ TxBuffer[1]);							//error checking

	HAL_UART_Transmit_IT(&huart6, TxBuffer, (sizeof(TxBuffer)));		//transmit data to F1 MCU
}

//---Costume Functions End---------------------------------------------------------------------
