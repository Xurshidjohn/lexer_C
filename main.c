#include <stdio.h>
#include 
#include "enum.h"
void init_lexer(char *code) {
	int i = 0;
	while(code[i] != '\0') {
		printf("%c\n", code[i]);
		++i;
	}
}

int main()
{
	char *shalom = "shabbat shalom!";
	init_lexer("int i = 0;");
}