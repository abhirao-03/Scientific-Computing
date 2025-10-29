// This file is fully copied from Practical_1.pdf as suggested in the text.

#include <stdio.h>


void f1(void){
	for(int i = 0; i >= 0; i++){};
};

void f2(void) {
	puts("Formatting /dev/sda1...");
};

void (*p1)(void) = f1;
void (*p2)(void) = f2;

int main(void){
	p1();
	return 0;
};

