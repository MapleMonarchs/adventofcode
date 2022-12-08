#include <stdio.h>
#include "stack.h"

int main() {

	cstack* stack1 = &(cstack) {.pointer = -1};
	cstack* stack2 = &(cstack) {.pointer = -1};
	cstack* stack3 = &(cstack) {.pointer = -1};
	cstack* stack4 = &(cstack) {.pointer = -1};
	cstack* stack5 = &(cstack) {.pointer = -1};
	cstack* stack6 = &(cstack) {.pointer = -1};
	cstack* stack7 = &(cstack) {.pointer = -1};
	cstack* stack8 = &(cstack) {.pointer = -1};
	cstack* stack9 = &(cstack) {.pointer = -1};

	cstckpsha(stack1, (char* []){ "H", "T", "Z", "D" }, 										4);
	cstckpsha(stack2, (char* []){ "Q", "R", "W", "T", "G", "C", "S"}, 			7);
	cstckpsha(stack3, (char* []){ "P", "B", "F", "Q", "N", "R", "C", "H" }, 8);
	cstckpsha(stack4, (char* []){ "L", "C", "N", "F", "H", "Z" }, 					6);
	cstckpsha(stack5, (char* []){ "G", "L", "F", "Q", "S" }, 								5);
	cstckpsha(stack6, (char* []){ "V", "P", "W", "Z", "B", "R", "C", "S" }, 8);
	cstckpsha(stack7, (char* []){ "Z", "F", "J" }, 													3);
	cstckpsha(stack8, (char* []){ "D", "L", "V", "Z", "R", "H", "Q" }, 			7);
	cstckpsha(stack9, (char* []){ "B", "H", "G", "N", "F", "Z", "L", "D" }, 8);

	printf("hallo\n");
	printf("haaaa\n");
}
