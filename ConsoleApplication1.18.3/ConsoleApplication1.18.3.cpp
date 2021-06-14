// ConsoleApplication1.18.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 15. Задача 3.

#include <iostream>
#include <vector>
using namespace std;

vector <int> locationAscendingOrder(vector <int> array) {
	int i;
	for ( i = 0; i< array.size(); i++) {	
		for (int j = 0; j < array.size()-1; j++) {
			if (array[j] > array[j+1]) {
				int  interVar = array[j];
				array[j] = array[j + 1];
				array[j + 1] = interVar;
			}
		}
		
	}
	return array;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int  elementValue=0, n=5, count=5;
	vector <int> array(n);
	cout << "\nВведите первые 5 элементов массива " << "\n";
		for (int i = 0; i < 5; i++) {
			cin >> array[i];
		}
cout << "\nВведите элементы массива \n" << "(-1 - для вывода 5-ого по возрастанию элемента массива, ";
	cout << "\n -2 - для завершения работы программы.)\n"; 
do{	
		cin >> elementValue;
        if (elementValue == -1) {	
			array = locationAscendingOrder(array);
	for (int i = 0; i < array.size(); i++) {
				cout << array[i] << " ";
			}
			cout << "\n Пятый элемент массива: " << array[4]<<"\n";
		}
		else if (elementValue == -2) {
			cout << "\n Программа заканчивает работу.";
			break;
		}	
		else  {
			array.push_back(elementValue);
           }
     } while (elementValue != -2);
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
