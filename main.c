#include <stdio.h>
#include <unistd.h>
#include <string.h>

int add(int a, int b);

int main(void)
{
	int  a = 100;
	printf("---%d---\n", a);

	return 0;
}

int add(int a, int b)
{
	return a+b;
}
