// DZ_1_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <time.h>


void choices_sort(int* arr, int size){
	int j = 0;
	int a = 0;
	for (int i = 0; i < size; i++) {
		j = i;
		for (int k = i; k < size; k++) {
			if (arr[j] > arr[k]) {
				j = k;
			}
		}
		a = arr[i];
		arr[i] = arr[j];
		arr[j] = a;
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int i, size;
	printf("Введите размер массива: \n");
	scanf_s("%d", &size);
	printf("Массив: \n");
	int *sort_arr = new int[size];
	for (i = 0; i<size; i++) {
		sort_arr[i] = rand() % 100;
		printf("%d\t", sort_arr[i]);
	}
	printf("\n");
	choices_sort(sort_arr, size);
	printf("Отсортированный массив: \n");
	for (int i = 0; i < size; i++) {
		printf("%d\t", sort_arr[i]);
	}
	printf("\n");
	system("pause");
    return 0;
}

