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
	printf("\n����巽鱈竪旦�� 狸奪脱辰坦 狸��棚単竪狸谷��端鱈短狸 竪 狸竪鱈竪狸��谷端鱈短狸 巽鱈��歎奪鱈竪奪狸 = %d\n", k);
}

int second()
{
    srand(static_cast<int>(time(NULL)));
	const int M = 5;
	const int N = 4;
	int sum = 0;
	int mat[M][N];
	cout << "Matrix " << endl;
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
}

int third()
{
    srand(time(NULL));
	printf("����辰��鱈竪奪 3:\n");
	int* mas2;

	int n = 0;
	printf("��但奪辰竪嘆奪 棚樽谷-但樽 箪谷奪狸奪鱈嘆樽但: ");
	scanf("%d", &n);
	mas2 = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		mas2[i] = rand() % 100;
		printf("%d ", mas2[i]);
	}
	free(mas2);
	printf("\n");
}

int fourth()
{
    srand(time(NULL));
	printf("����辰��鱈竪奪 4:\n");
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
	printf("��但奪辰竪嘆奪 棚樽谷竪歎奪単嘆但樽 単嘆坦辰奪鱈嘆樽但, 棚樽嘆樽丹樽奪 探樽嘆竪嘆奪 辰樽叩��但竪嘆端\n損>\n");
	scanf("%d", &kolv);
	for (i = 0; i < kolv; i++)
	{
		printf("��但奪辰竪嘆奪 担��狸竪谷竪綻 単嘆坦辰奪鱈嘆��\n");
		scanf("%20s", &stud[i].famil);
		OemToCharA(stud[i].famil, stud[i].famil);

		printf("��但奪辰竪嘆奪 竪狸耽 単嘆坦辰奪鱈嘆��\n");
		scanf("%20s", &stud[i].name);
		OemToCharA(stud[i].name, stud[i].name);

		printf("��但奪辰竪嘆奪 鱈��巽但��鱈竪奪 担��棚坦谷端嘆奪嘆�� 単嘆坦辰奪鱈嘆��\n");
		scanf("%20s", &stud[i].facult);
		OemToCharA(stud[i].facult, stud[i].facult);

		printf("��但奪辰竪嘆奪 鱈樽狸奪丹 巽��歎奪嘆鱈樽辿 棚鱈竪脱棚竪 単嘆坦辰奪鱈嘆��\n");
		scanf("%20d", &stud[i].Nomzach);
	}

	for (i = 0; i < kolv; i++)
	{
		printf("��嘆坦辰奪鱈嘆 %s %s 樽叩坦歎��奪嘆単耽 鱈�� 担��棚坦谷端嘆奪嘆奪 %s, 鱈樽狸奪丹 巽��歎転嘆鱈樽辿 棚鱈竪脱棚竪 %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
	}

	char sl[20];
	printf("�枘竪単棚 \n");
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
			printf("��嘆坦辰奪鱈嘆 %s %s 樽叩坦歎��奪嘆単耽 鱈�� 担��棚坦谷端嘆奪嘆奪 %s, 鱈樽狸奪丹 巽��歎転嘆鱈樽辿 棚鱈竪脱棚竪 %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			chet++;
			pr = chet;
		}
		if (strcmp(sl, stud[i].name) == 0 && pr != chet)
		{
			printf("��嘆坦辰奪鱈嘆 %s %s 樽叩坦歎��奪嘆単耽 鱈�� 担��棚坦谷端嘆奪嘆奪 %s, 鱈樽狸奪丹 巽��歎転嘆鱈樽辿 棚鱈竪脱棚竪 %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			chet++;
			pr = chet;

		}
		if (strcmp(sl, stud[i].facult) == 0 && pr != chet)
		{
			printf("��嘆坦辰奪鱈嘆 %s %s 樽叩坦歎��奪嘆単耽 鱈�� 担��棚坦谷端嘆奪嘆奪 %s, 鱈樽狸奪丹 巽��歎転嘆鱈樽辿 棚鱈竪脱棚竪 %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
			chet++;
			pr = chet;

		}
		/*if (strcmp(sl, nomzach2) == 0 && pr != chet)
		{
		printf("��嘆坦辰奪鱈嘆 %s %s 樽叩坦歎��奪嘆単耽 鱈�� 担��棚坦谷端嘆奪嘆奪 %s, 鱈樽狸奪丹 巽��歎転嘆鱈樽辿 棚鱈竪脱棚竪 %d\n", stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
		chet++;
		pr = chet;

		}*/
	}
	if (chet == 0)
		printf("|_______��竪歎奪達樽 鱈奪 鱈��辿辰奪鱈樽_______|\n");
}

int main()
{
	setlocale(LC_ALL, "Russian");
    int num;
	printf("\n��于亠亟亳��亠 仆仂仄亠�� 亰舒亟舒仆亳��: \n");
    scanf("%d", num);
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