
#include "stdlib.h"
#include "time.h"
#include "iostream"
#include "conio.h"
#include "ctime"
using namespace std;

void main()
{
#define sizeArr 15
#define sizeArra 10
#define sizeArraa 10
	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "To exit, press enter'" << endl;
		cout << "Vedite nomer zadaniya : ";
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			/*1.	Ввести два массива действительных чисел,
			состоящих из 9 и 7 элементов. Сформировать третий массив из упорядоченных по возрастанию значений обоих массивов*/
			int mas1[7], mas2[9], mas3[16];
			cout << "Массив длинною 7 элементов: ";
			for (int i = 0; i < 7; i++)
			{
				mas1[i] = 1 + rand() % 20;
				mas3[i] = mas1[i];
				cout << mas1[i] << " ";
			}
			cout << endl;
			cout << endl;
			cout << "Массив длинною 9 элементов: ";
			for (int i = 0; i < 9; i++)
			{
				mas2[i] = 1 + rand() % 20;
				mas3[i + 7] = mas2[i];
				cout << mas2[i] << " ";
			}
			cout << endl;
			cout << endl;
			cout << "Массив длинною 16 элементов сформированный из двух выше перечисленных: ";

			for (int i = 0; i < 16; i++)
			{
				cout << mas3[i] << " ";
			}
			cout << endl;
			cout << endl;
			cout << "Массив длинною 16 элементов упорядоченный по убыванию: ";

			for (int i = 0; i < 16; i++)
			{
				for (int j = 16 - 1; j > i; j--)
				{
					if (mas3[j - 1] > mas3[j])
					{
						int temp = mas3[j - 1];
						mas3[j - 1] = mas3[j];
						mas3[j] = temp;
					}
				}
			}

			for (int i = 15; 0 <= i; i--)
			{
				cout << mas3[i] << " ";
			}
			cout << endl;
			cout << endl;

		}break;

		case 2:
		{
			/*2.	В заданном целочисленном массиве R(9) определить индекс наибольшего из нечетных по значению положительных элементов*/
			int r[9], maxindex = 0;
			for (int i = 0; i < 9; i++)
			{
				r[i] = 1 + rand() % 20;
				cout << i << " - " << " " << r[i] << " " << endl;
			}
			for (int i = 0; i < 9; i++)
			{
				if ((r[i] % 3 == 0) && (r[i] > 0) && (maxindex = 0) || (r[i] > r[maxindex]))
					maxindex = i;
				if (maxindex > 0)
					cout << "Индекс наибольшего из нечетных по значению положительных элементов: " << maxindex << endl;
				else
					cout << "Массив не содержит нечетных по значению положительных элементов " << endl;


			}
		}break;

		case 3:
		{
			/*3.	Дана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца.*/
			int mas[6][8];
			int  i, h, sum = 1;

			for (i = 0; i < 6; i++)
			{
				for (h = 0; h < 8; h++)
				{
					mas[i][h] = 1 + rand() % 5;
				}
			}
			for (i = 0; i < 6; i++)
			{
				for (h = 0; h < 8; h++)
				{
					cout << mas[i][h] << "\t";
				}
				cout << endl;
			}
			h = 0;
			for (int i = 0; i < 6; i++)
				if (mas[i][h] >= 0)
					sum = mas[i][h] * sum;
			cout << "Proizvedenie = " << sum << endl;

		}break;

		case 4:
		{
			/*4.	Даны действительные числа c1, c2, …, cn. Найти
			произведение суммы чисел с четными индексами
			и суммы чисел с нечетными индексами.*/
			int mas[5][3];
			int i, h;
			int sum = 0, sum1 = 0;

			for (i = 0; i < 5; i++)
			{
				for (h = 0; h < 3; h++)
				{
					mas[i][h] = 1 + rand() % 20;
				}
			}
			for (i = 0; i < 5; i++)
			{
				for (h = 0; h < 3; h++)
				{
					cout << i << "- " << mas[i][h] << " " << "\t";
				}
				cout << endl;
			}
			for (i = 0; i < 5; i++)
			{
				for (h = 0; h < 3; h++)
				{
					if (mas[i][h] % 2 == 0)
						sum = sum + mas[i][h];

				}
			}

			cout << "Chisla chetnie po indexcu " << sum << "\t";

			for (i = 0; i < 5; i++)
			{
				for (h = 0; h < 3; h++)
				{
					if (mas[i][h] % 3 == 0)
						sum1 = sum1 + mas[i][h];
				}
			}

			cout << "Chisla ne chetnie po indexcu " << sum1 << "\t";


		}break;

		case 5:
		{
			/*5.	Ввести массив, состоящий из 14 элементов действительного типа.
			Поменять местами первую половину со второй. Определить количество произведенных при этом перестановок.*/
			int mas[8];
			for (int i = 0; i < 8; i++)
			{
				mas[i] = 1 + rand() % 25;
				cout << i << " - " << mas[i] << " " << endl;
			}
			cout << "Posle sortirovki " << endl;
			for (int i = 4; i < 8; i++)
			{
				cout <<i<<" - "<< mas[i]<<" "<<endl;
			}
			for (int i = 0; i < 4; i++)
			{
				cout << i << " - " << mas[i] << " " << endl;
			}
			cout << "Прошло  перестановки 4 " << endl;
		}break;

		case 6:
		{
			/*6.	Определить количество локальных максимумов в заданном числовом массиве. (Локальный максимум в числовом массиве –
			это последовательность трех рядом стоящих чисел, в которой среднее число больше стоящих слева и справа от него).*/
			const int M = 10;
			int mas[M], i, max, imax, j,imin;
			for (i = 0; i < M; i++)
			{
				mas[i] = 1 + rand() % 25;
				cout << i << " - " << mas[i] << " " << endl;
			}
			for (i = 0; i < M - 1; i++)
			{
				for (j = 0; j >= i; j--)
					if (mas[j] > mas[j + 1])
						max = mas[0];
				imax = 0;
				for (i = 1; i < M; i++)
					if (mas[i] > max)
					{
						max = mas[i];
						imax = i;
					}

				{

				}
			}cout << "Max " << imax << endl;
			imin = 0;
			for (i = 0; i < M; i++)
				if(mas[i]<mas[imin])
			{
					imin = i;
			}
			cout << "В массиве элементы находятся от " << mas[imin] << "  до " << mas[imax] << " " << endl;

		}break;

		case 7:
		{
			/*7.	В заданном числовом массиве определить и вывести индексы последовательностей чисел, которые монотонно убывают (каждое следующее число меньше предыдущего).*/
			int mas[14], i;
			char mi[40] = "  ", prom[3];
			bool es = 0;
			cout << " ";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << " ";
			}
			cout << endl;
			for (i = 0; i < 13; i++)
			{
				if (es == 0 && mas[i + 1] < mas[i])
				{
					es = 1;
					itoa(i, prom, 10);
					strcat(mi, prom);
					prom[0] = '-';
					prom[1] = '\0';
					strcat(mi, prom);
				}
				else if (es == 1 && mas[i + 1] < mas[i])
				{

				}
				else if (es == 1 && mas[i + 1] >= mas[i])
				{
					itoa(i, prom, 10);
					strcat(mi, prom);
					prom[0] = ',';
					prom[1] = ' ';
					prom[2] = '\0';
					strcat(mi, prom);
					es = 0;
				}
			}
			int count = 0;
			for (i = 0; i < 40; i++)
			{
				if (mi[i] != '\0')count++;
			}

			if (mi[count - 1] == '-')
			{
				mi[count] = '1';
				mi[count + 1] = '3';
			}
			if (mi[count - 2] == ',')mi[count - 2] = ' ';
			cout << mi << endl;
		}break;

		case 8:
		{
			/*8.	Ввести массив, состоящий из 10 элементов (десять двузначных чисел) целого типа. Получить новый массив,
			состоящий из разностей цифр элементов исходного массива.*/
			int mas[10], s1, s2, i, mas1[10];


			for (i = 0; i < 10; i++)
			{
				mas[i] = 10 + rand() % 90;
				cout << mas[i] << " ";
			}

			cout << endl;


			for (i = 0; i < 10; i++)
			{
				s1 = mas[i] / 10;
				s2 = mas[i] % 10;
				mas1[i] = s1 - s2;
				cout << mas1[i] << " ";
			}
			cout << endl;
			cout << endl;
		}break;

		case 9:
		{
			/*9.	Задан целочисленный массив. Определить количество участков массива, на котором элементы 
			монотонно возрастают (каждое следующее число больше предыдущего)*/
			int mas[14], i;
			char mi[40] = "  ", prom[3];
			bool u = 0;
			cout << " ";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << " ";
			}
			cout << endl;
			for (i = 0; i < 13; i++)
			{
				if (u == 0 && mas[i + 1] > mas[i])
				{
					u = 1;
					itoa(i, prom, 10);
					strcat(mi, prom);
					prom[0] = '-';
					prom[1] = '\0';
					strcat(mi, prom);
				}
				else if (u == 1 && mas[i + 1] > mas[i])
				{

				}
				else if (u == 1 && mas[i + 1] <= mas[i])
				{
					itoa(i, prom, 10);
					strcat(mi, prom);
					prom[0] = ',';
					prom[1] = ' ';
					prom[2] = '\0';
					strcat(mi, prom);
					u = 0;
				}
			}
			int count = 0;
			for (i = 0; i < 40; i++)
			{
				if (mi[i] != '\0')count++;
			}

			if (mi[count - 1] == '-')
			{
				mi[count] = '1';
				mi[count + 1] = '3';
			}
			if (mi[count - 2] == ',')mi[count - 2] = ' ';
			cout << mi << endl;

		}break;

		case 10:
		{
			/*10.	Ввести два массива действительных чисел. Определить максимальные элементы в каждом массиве и поменять их местами.*/
			float mas[10], mas1[10], maks;
			int i;
			short int ind_mas, ind_mas1;

			maks = -10;
			for (i = 0; i < 10; i++)
			{
				mas[i] = -2 + rand() % 99;
				cout << mas[i] << " ";
				if (mas[i] > maks)
				{
					maks = mas[i];
					ind_mas = i;
				}
			}

			maks = -40;
			for (i = 0; i < 10; i++)
			{
				mas1[i] = -2 + rand() % 99;
				cout << mas1[i] << " ";
				if (mas1[i] > maks)
				{
					maks = mas1[i];
					ind_mas1 = i;
				}
			}
			maks = mas[ind_mas];
			mas[ind_mas] = mas1[ind_mas1];
			mas1[ind_mas1] = maks;

			for (i = 0; i < 10; i++)
			{
				if (i != ind_mas)
				{
					cout << mas[i] << " ";
				}
				else
				{
					cout << mas[i] << " ";
				}
			}
			for (i = 0; i < 10; i++)
			{
				if (i != ind_mas1)
				{

					cout << mas1[i] << " ";
				}
				else
				{
					cout << mas1[i] << " ";
				}
			}
			cout << endl;
		}break;
		}















		system("pause");

	} while (tm != 200);



}