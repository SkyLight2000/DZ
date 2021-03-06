// DZ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <time.h>


void bubble_sort(int* arr, int size) {
	int n = 0;
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}
		}
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
	bubble_sort(sort_arr, size);
	printf("Отсортированный массив: \n");
	for (int i = 0; i < size; i++) {
		printf("%d\t", sort_arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
