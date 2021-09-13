#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//int main()
//{
//	setlocale(LC_ALL, "Ru");
//	int arr[10] = {123, -63, 22, 9, 0, 24, -2, 923, 1000, -19}, max = INT_MIN, min = INT_MAX;
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] < min)
//			min = arr[i];
//
//		if (arr[i]> max)
//			max = arr[i];
//	}
//	printf("Разница: %d", max - min);
//	_getch();
//}

//int main()
//{
//	setlocale(LC_ALL, "Ru");
//	srand(time(NULL));
//	int arr[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = rand() % 201 - 101;
//		printf("%d ", arr[i]);
//	}
//	_getch();
//}

//int main()
//{
//	setlocale(LC_ALL, "Ru");
//	int* arr, i, n;
//
//	printf("Введите размер массива: ");
//	scanf("%d", &n);
//	arr = (int*)malloc(n * sizeof(int));
//	
//	printf("\nЗаполните массив:\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	printf("\nРезультат:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//	_getch();
//}

//int main()
//{
//	setlocale(LC_ALL, "Ru");
//	srand(time(NULL));
//	int arr[10][10], i, j, x = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			arr[i][j] = rand() % 201 - 101;
//			printf(" %5d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//
//	printf("\n\n");
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			x = x + arr[i][j];
//		}
//		printf("Сумма %d-й строки равна: %3d\n",i + 1, x);
//		x = 0;
//	}
//	_getch();
//}

int main(void)
{
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setlocale(LC_ALL, "Ru");

	int i;

	struct student

	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;

	} stud[3], input;

	for (i = 0; i < 3; i++)
	{
		printf("Введите фамилию студента\n"); 
		scanf("%20s", stud[i].famil);
	}

	for (i = 0; i < 3; i++)
	{
		printf("Введите имя студента %s\n", stud[i].famil); 
		scanf("%20s", stud[i].name);
	}

	for (i = 0; i < 3; i++)
	{
		printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name);
		scanf("%20s", stud[i].facult);
	}

	for (i = 0; i < 3; i++)
	{
		printf("Введите номер зачётной книжки студента %s %s\n", stud[i].famil, stud[i].name);
		scanf("%d", &stud[i].Nomzach);
	}

	for (i = 0; i < 3; i++)
	{
		printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", stud[i].famil, stud[i].name,
			stud[i].facult, stud[i].Nomzach);
	};

	printf("Введите фамилию студента\n"); 
	scanf("%20s", input.famil);

	printf("Введите имя студента %s\n", input.famil);
	scanf("%20s", input.name);

	printf("Введите название факультета студента %s %s\n", input.famil, input.name);
	scanf("%20s", input.facult);

	printf("Введите номер зачётной книжки студента %s %s\n", input.famil, input.name);
	scanf("%d", &input.Nomzach);

	for (i = 0; i < 3; i++)
	{
		if ((strcmp(stud[i].famil, input.famil) == 0) && (strcmp(stud[i].name, input.name) == 0) && (strcmp(stud[i].facult, input.facult) == 0) && (stud[i].Nomzach == input.Nomzach))
		{
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			_getch();
			_exit;
		}
	}
	printf("Такого студента нет!");
	_getch();
}