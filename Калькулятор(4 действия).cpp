#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");  // Для определения русского языка
	double a, b;
	cout << "Введите первое произвольное число: ";
	cin >> a;
	cout << "Спасибо, Вы ввели: " << a << endl;
	cout << "Введите второе произвольное число: ";
	cin >> b;
	cout << "Спасибо, Вы ввели: " << b << endl;
	int x;         
	double c = 0;
	cout << "Выберите операцию(введите номер): " << endl;
	cout << "1. Сложение" << endl;
	cout << "2. Вычитание" << endl;
	cout << "3. Умножение" << endl;
	cout << "4. Деление" << endl;
	cin >> x;
	if (x == 1)        // Проверка нескольких условий и выполнение операции при верном условии
		c = a + b;
	if (x == 2)
		c = a - b;
	if (x == 3)
		c = a * b;
	if (x == 4)
		c = a / b;
	cout << "Вы получили: " << c << endl;
	return 0;
}