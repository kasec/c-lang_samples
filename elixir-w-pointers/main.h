#include <stdio.h>

/*
The way your elixir works is that anyone 
who is at least 21 years old becomes ten years younger.
However, the elixir does not work on anyone twenty years old or younger - 
when these people try the elixir, they actually double in age!
*/
//Write your function prototype here
void changeAddr(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
	changeAddr(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}