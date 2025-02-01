#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "function.h"
#define ENDOFSTR '\0'

void array_push(char *array[], char *data) 
{
	int i = 0;
	while(*array[i] != ENDOFSTR) {
		i++;
	}
    array[i] = data;
}

void parse_code(char *code)
{
	char *tokens[100];
	int i = 0, cos = 0;
	char *str = (char*)malloc(100 * sizeof(int));
		while(code[i] != ENDOFSTR) {
		if(!isspace(code[i])) {
			printf("%c\n", code[i]);
			str[cos] = code[i];
			cos++;
		} else if(isspace(code[i])) {
			cos = 0;
			str[0] = '\0';
			array_push(tokens, str);
		}
		i++;
	}
}
