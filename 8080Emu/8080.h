#pragma once
#include <stdint.h>
struct ConditionFlags
{
	uint8_t z : 1;
	uint8_t s : 1;
	uint8_t p : 1;
	uint8_t cy : 1;
	uint8_t ac : 1;
	uint8_t pad : 3;


};
/*
* Different States of the 8080
*/
struct State8080
{
	uint8_t a; // Accumulator
	uint8_t b; 
	uint8_t c;
	uint8_t d;
	uint8_t h;
	uint8_t l;
	uint8_t *memory; //La RAM
	ConditionFlags cc;
	uint8_t int_enable;
	uint16_t    sp;
	uint16_t    pc;

};