// DZ_2_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

void mystrcat(char *str1, const char *str2);

int main()
{
	SetConsoleOutputCP(1251);
	char str1[40], str2[40];
	printf("Введите 1 строку:\n");
	gets_s(str1);
	printf("Введите 2 строку:\n");
	gets_s(str2);
	mystrcat(str1, str2);
	printf("Вы ввели: %s\n", str1);
	system("pause");
	return 0;
}

void mystrcat(char *str1, const char *str2)
{
	char* tmp = str1;
	while (*tmp) {
		tmp++;
	}
	while (*str2) {
		*tmp = *str2;
		tmp++;
		str2++;
	}
	*tmp = *str2;
}