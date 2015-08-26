#include <stdint.h>
#include "8080.h"

//Delete_When_Vita_Comes:
#include <stdio.h>
void UnimplementedCall(State8080* OpCode)
{
	//Non-ARM Only--
	printf("Error UNKNOWN call");
	/*
	* Own-Debugger Call Implementation
	*/
	//Exit:


}

int Emulate8080(State8080* state)
{
	
	unsigned char *OpCode = &state->memory[state->pc];

	switch (*OpCode)
	{
		case 0x00: break; //NOP
		case 0x01:        //LXI B,D16
			state->b = 3;
			state->c = 2;
			state->pc += 2;
			break;
		case 0x02:		//STAX B
			uint16_t pair = (state->b << 8) | (state->c);
			state->memory[pair] = state->a;
			break;
		case 0x03:
			uint16_t pair = (state->b << 8) | (state->c);

			pair += 1;
			state->b = (pair & 0xff00) >> 8;
			state->c = (pair & 0xff);
			break;




	}



}