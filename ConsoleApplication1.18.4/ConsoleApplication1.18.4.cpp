﻿// ConsoleApplication1.18.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 15. Задача 4.

#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[6] = { -100, -50, -5, 1, 10, 15 };
	for (int i = 1; i <6; i++) {
		for (int j = 0; j <= i; j++) {
			if (array[j] > 0 && array[j + 1] > 0) {//предполагается, что одинаковые значения отсутствуют.
				break;
			}
			if (abs(array[j]) > abs(array[j + 1])) {
				int interVar = array[j];
				array[j] = array[j+1];
				array[j + 1] = interVar;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << array[i] << " ";
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
