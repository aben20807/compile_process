#include <stdio.h>

#define HELLO_TXT "Hello, %s\n"

int main(int argc, char *argv[])
{
	char name[10];
	scanf("%s", name);
	printf(HELLO_TXT, name);
	return 0;
}

