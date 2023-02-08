#include <iostream>
#include "Omegastring.h"

//Перегрузка оператора []
char& Omegastring::operator[] (int i) {
	return smthlikestring[i];
}

//функция поиска длины строки
//аргумент stringexample типа char* - строка, длину которой ищет функция
//возвращаемое значение - длина строки
int Omegastring::stringlength(char* stringexample) {
	int length = 0;

	for (; stringexample[length] != '\0'; length++);

	return length;
}

//функция поиска длины строки
//аргумент stringexample типа Omegastring - строка, длину которой ищет функция
//возвращаемое значение - длина строки
int Omegastring::stringlength(Omegastring stringexample) {
	int length;

	for (length = 0; stringexample[length] != '\0'; length++);

	return length;
}

//конструктор по умолчанию
Omegastring::Omegastring() {
	smthlikestring = new char[MAX_LENGTH]{};
}

//конструктор с параметрами
Omegastring::Omegastring(char* string) {
	smthlikestring = new char[MAX_LENGTH]{};
	smthlikestring = string;
}

//конструктор копирования
Omegastring::Omegastring(Omegastring &string) {
	smthlikestring = new char[MAX_LENGTH]{};
	int i = 0;

	for (; string[i] != '\0'; i++) {
		smthlikestring[i] = string[i];
	}

	smthlikestring[i] = '\0';
}

//деструктор 
Omegastring::~Omegastring() {
	delete[]smthlikestring;
}

//функция, задающая строку, ввод производится с клавиатуры
void Omegastring::setstring() {
	int i = 0;

	for (; (smthlikestring[i] = std::cin.get()) != '\n'; i++);

	smthlikestring[i] = '\0';
}


//функция поиска длины строки
int Omegastring::stringlength() {
	int length;

	for (length = 0; smthlikestring[length] != '\0'; length++);

	return length;
}

//функция сравнения строк
//аргумент string2 типа char* - строка, с которой производится сравнение
//возвращаемое значение - 0, если объект класса меньше принимаемого аргумента, и 1, если больше
int Omegastring::stringcomparison(char* string2) {
	int i = 0, length1 = stringlength(), length2 = stringlength(string2);

	if (length1 > length2)
		return true;
	else {
		if (length1 < length2) {
			return false;
		}
		else {
			while (smthlikestring[i] == string2[i]) {
				i++;
			}

			return smthlikestring[i] > string2[i];
		}

	}
}

//функция сравнения строк
//аргумент string2 типа Omegastring - строка, с которой производится сравнение
//возвращаемое значение - 0, если объект класса меньше принимаемого аргумента, и 1, если больше
int Omegastring::stringcomparison(Omegastring string2) {
	int i = 0, length1 = stringlength(), length2 = stringlength(string2);

	if (length1 > length2)
		return true;
	else {
		if (length1 < length2) {
			return false;
		}
		else {
			while (smthlikestring[i] == string2[i]) {
				i++;
			}

			return smthlikestring[i] > string2[i];
		}

	}
}

//функция вывода строки
void Omegastring::getstring() {
	int i = 0, length = stringlength();

	for (; i < length; i++)
	{
		std::cout << smthlikestring[i];
	}
}

//функция преобразования типа Omegastring в char*
char* Omegastring::omegastringtochar() {
	return smthlikestring;
}

//функция преобразования типа char* в Omegastring
Omegastring Omegastring::chartoomegastring() {
	return smthlikestring;
}

//функция копирования данных в иную строку
//аргумент string2 типа char* - строка, из которой происходит копирование
void Omegastring::copy(char* string2) {
	int i = 0, length = stringlength(string2);
	
	for (; i < length; i++) {
		 smthlikestring[i] = string2[i];
	}

	smthlikestring[i] = '\0';
}

//функция копирования данных в иную строку
//аргумент string2 типа Omegastring - строка, из которой происходит копирование
void Omegastring::copy(Omegastring string2) {
	int i = 0, length = stringlength(string2);

	for (; i < length; i++) {
		smthlikestring[i] = string2[i];
	}
	
	smthlikestring[i] = '\0';
}