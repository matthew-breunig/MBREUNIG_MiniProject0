// MBREUNIG_BinaryUtils.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: Matthew Breunig
// Date: 5 September 2022
// Topic: Mini_Project[0]

#include "c:/Users/breun/source/repos/MBREUNIG_BinaryUtils/MBREUNIG_BinaryUtils.cpp"
#include <stdio.h>

int main(void)
{
	uint32_t solo = 0;
	
	setbit(&solo, 24);

	setbit(&solo, 16);

	setbit(&solo, 17);

	setbits(&solo, 4095);

	clearbit(&solo, 11);

	clearbits(&solo, 240);

	display_binary(solo);

	return 0;

}