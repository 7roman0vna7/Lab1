#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");     // Для определения русского языка
	double a, b;
	cout << "Введите первое произвольное число: ";
	cin >> a;
	cout << "Спасибо, Вы ввели: " << a << endl;
	cout << "Введите второе произвольное число: ";
	cin >> b;
	cout << "Спасибо, Вы ввели: " << b << endl;
	double c = 0;
	c = a + b;
	cout << "Вы получили: " << c << endl;
	return 0;
}