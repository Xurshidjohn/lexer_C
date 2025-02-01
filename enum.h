#ifndef ENUM_H
#define ENUM_H

char *types[] = {"UNKNOWN", "INTEGER", "STRING", "CEMICOLON", "NUMBER"};
typedef enum {
	UNKNOWN,
	INTEGER,
	STRING,
	CEMICOLON,
	NUMBER,
} TOKEN;

#endif // ENUM_H
