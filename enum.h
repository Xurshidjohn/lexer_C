#ifndef ENUM_H
#define ENUM_H

const char types[100] = {"UNKNOWN", "INTEGER", "STRING", "CEMICOLON", "NUMBER"};
typedef enum {
	UNKNOWN,
	INTEGER,
	STRING,
	CEMICOLON,
	NUMBER,
} TOKEN;

#endif // ENUM_H
