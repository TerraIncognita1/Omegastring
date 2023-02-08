/*ƒанный файл содержит класс дл€ работы со строками, представленными в виде массива типа char*/
#pragma once
#include <iostream>
#define MAX_LENGTH 256


class Omegastring {
private:
	char* smthlikestring;

	int stringlength(char*);
	int stringlength(Omegastring);

public:
	char& operator[] (int);

	Omegastring();
	Omegastring(char*);
	Omegastring(Omegastring&);
	~Omegastring();
	void setstring();
	int stringlength();
	int stringcomparison(char*);
	int stringcomparison(Omegastring);
	void getstring();
	char* omegastringtochar();
	Omegastring chartoomegastring();
	void copy(char*);
	void copy(Omegastring);
};