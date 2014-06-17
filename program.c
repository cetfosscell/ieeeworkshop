#include <stdio.h>

void function1();
void function2();
void add();

int main()
{
	printf("Test program1\n");
	printf("Teating:...\n");
	function1();
	add();
}

void function1()
{
	printf("A useless function\n");
}

void function2()
{
	printf("Another useless funciton\n");
}

void add()
{
	int a;
	int b;
	a = 3;
	b = 4;

	printf("The sum is %d\n",a+b);
}
