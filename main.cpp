#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <malloc.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <ctime>
#pragma warning(disable : 4996)
using namespace std;

int first()
{
	int n = 10, i = 0, max = 0, min = 9, k = 0;
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	while (i < n)
	{
		if (a[i] < min)
		{
 min = a[i];
		}

		if (a[i] > max)
		{
 max = a[i];
		}
 i++;
	}
 k = max - min;
	printf("\nРазница между максимлаьным и минимальным значением = %d\n", k);
	return 0;
}

int second()
{
    srand(static_cast<int>(time(NULL)));
	const int M = 5;
	const int N = 4;
	int sum = 0;
	int mat[M][N];
 cout << "Matrix ";
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
 mat[i][j] = rand() % 9;
 cout << mat[i][j] << " ";
		}
 cout << endl;
	}
 cout << endl;
	for (int j = 0; j < N; j++)
	{
		sum = 0;
		for (int i = 0; i < M; i++)
		{
			sum += mat[i][j];
		}
		cout << sum << endl;
	}
	return 0;
}

int third()
{
    srand(time(NULL));
	//printf("Разница между максимальным и минимальным значением\n");
	int* mas2;

	int n = 0;
	printf("Введите кол-во элементов: ");
	scanf("%d", &n);
	mas2 = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		mas2[i] = rand() % 100;
		printf("%d ", mas2[i]);
	}
	free(mas2);
	printf("\n");
	return 0;
}

int fourth()
{
    srand(time(NULL));
	printf("Задание 4:\n");
	int sum = 0;
	int mas[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mas[i][j] = rand() % 100;
			printf("%2d ", mas[i][j]);
			sum = sum + mas[i][j];
		}
		printf("\t--SUM--> %d\n", sum);
		sum = 0;
	}
	printf("\n");
	return 0;
}

int fifth()
{
    int i;
	struct student
	{
		char famil[40];
		char name[40];
		char facult[40];
		int Nomzach;
	} stud[3];
	int kolv = 0; //flag = 0;
	printf("Введите количество студентов, которое хотите добавить\n");
	scanf("%d", &kolv);
	for (i = 0; i < kolv; i++)
	{
		printf("Введите фамилию студента\n");
		scanf("%20s", &stud[i].famil);
		OemToCharA(stud[i].famil, stud[i].famil);

		printf("Введите имя студента\n");
		scanf("%20s", &stud[i].name);
		OemToCharA(stud[i].name, stud[i].name);

		printf("Введите название факультета студента\n");
		scanf("%20s", &stud[i].facult);
		OemToCharA(stud[i].facult, stud[i].facult);

		printf("Введите номер зачетной книжки студента\n");
		scanf("%20d", &stud[i].Nomzach);
	}

	for (i = 0; i < kolv; i++)
	{
		printf("Студент %s %s обучается на факультете %s, номер зачётной книжки %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}

	char sl[20];
	printf("Поиск  \n");
	printf(">\a");
	scanf("%s", sl);
	OemToCharA(sl, sl);
	printf("\n");
	int chet = 0;
	for (int i = 0; i < kolv; i++)
	{
		int pr = 99;
		if (strcmp(sl, stud[i].famil) == 0)
		{
			printf("Студент %s %s обучается на факультете %s, номер зачётной книжки %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			chet++;
			pr = chet;
		}
		if (strcmp(sl, stud[i].name) == 0 && pr != chet)
		{
			printf("Студент %s %s обучается на факультете %s, номер зачётной книжки %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			chet++;
			pr = chet;

		}
		if (strcmp(sl, stud[i].facult) == 0 && pr != chet)
		{
			printf("Студент %s %s обучается на факультете %s, номер зачётной книжки %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			chet++;
			pr = chet;

		}
	}
	if (chet == 0)
		printf("|_______Ничего не найдено_______|\n");
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
    int num = 0;
	printf("\nВведите номер задания: \n");
    //scanf("%d", num);
	cin >> num;
    switch(num){
        case 1:
            first();
            break;
        case 2:
            second();
            break;
        case 3:
            third();
            break;
        case 4:
            fourth();
            break;
        case 5:
            fifth();
            break;
    }
}
