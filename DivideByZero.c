/*
 ============================================================================
 Name        : DivideByZero.c
 Author      : Don Snyder
 Version     :
 Copyright   : 
 Description : Program for testing core dump analysis and using gdb
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Core Dump Analysis Test Started"); /* prints Core Dump Analysis Test Started */

	char ch;
	int i=0;

	i = i/0;

	puts("Enter keystroke:");

	for (;;) {
		ch = getchar();
		printf("%i", ch);
	}

	return EXIT_SUCCESS;
}
