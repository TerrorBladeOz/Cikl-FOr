#include <iostream>

using namespace std;

void a1()
{
	setlocale(LC_ALL, "ru");
	int a, n, n1, n2, c, sum = 0;
	for (int i = 100; i < 1000; i++)
	{
		c = 0;
		n2 = i % 10;
		a = i / 10;
		n1 = a % 10;
		n = a / 10;

		if ((n == n1) && (n != n2) && (n1 != n2))
		{
			c++;
		}
		if ((n != n1) && (n == n2) && (n1 != n2))
		{
			c++;
		}
		if ((n != n1) && (n != n2) && (n1 == n2))
		{
			c++;
		}
		if (c == 1)
		{
			cout << i << "\n";
			sum++;
		}
	}
	cout << "Количество чисел с 2 одинаковыми цифрами: " << sum;
}
void a2()
{
	setlocale(LC_ALL, "ru");
	int a, n, n1, n2, c, sum = 0;
	for (int i = 100; i < 1000; i++)
	{
		c = 0;
		n2 = i % 10;
		a = i / 10;
		n1 = a % 10;
		n = a / 10;

		if ((n != n1) && (n != n2) && (n1 != n2))
		{
			cout << i << "\n";
			sum++;
		}
		
	}
	cout << "Количество чисел с 3 разными цифрами: " << sum;
}

void a3()
{
	setlocale(LC_ALL, "ru");
	int a, res, k = 0; double sum = 0;
	cout << "Введите любое целое число: ";
	cin >> a;
	while (a != 0) 
	{
		res = a % 10;
		if (res != 3 && res != 6) 
		{
			sum += res * pow(10, k);
			k++;
		}
		a /= 10;
	}
	cout << "Число без 3 и 6: " << sum;
}

void a4()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите число: ";
	cin >> a;
	for (int i = a - 1; i > 1; i--)
	{
		b = i;
		if ((a % (b * b) == 0) && (a % (b * b * b) != 0))
		{
			cout << b << "\n";
		}
	}
}

void a5()
{
	setlocale(LC_ALL, "ru");
	int a, b, j = 0;
	cin >> a;
	b = a;
	while (b > 0) 
	{
		j += b % 10;
		b /= 10;
	}
	if (pow(j, 3) == pow(a, 2))
		cout << "Куб суммы цифр этого числа равен А*А." << endl;
	else
		cout << "Куб суммы цифр этого числа не равен А*А." << endl;
}

void a6()
{
	setlocale(LC_ALL, "ru");
	int a, b = 0, j = 0;
	cout << "Введите любое целое число: ";
	cin >> a;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			cout << "Вот число, которое делиться на a без остатка: " << i<< endl;
			b++;
		}
	}
	cout << "\nКоличство чисел: "<< b;
}

void a7()
{
	setlocale(LC_ALL, "ru");
	int a, b, x;
	cout << "Введите два целых числа: ";
	cin >> a >> b;
	if (a > b)
		x = a;
	else
		x = b;
	for (int i = 1; i <= x; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << i << endl;
		}
	}
}

void main()
{
	setlocale(LC_ALL,"ru");
	int a = 1;
	cout << "Чтобы закончить напишите 0\n\n";
	while (a != 0)
	{
		cout << "1 - 7 >>> "; cin >> a;
		switch (a)
		{
		case 1:
			a1();
			break;
		case 2:
			a2();
			break;
		case 3:
			a3();
			break;
		case 4:
			a4();
			break;
		case 5:
			a5();
			break;
		case 6:
			a6();
			break;
		case 7:
			a7();
			break;
		default:
			cout << "Вы ввели неправильный вариант, повторите попытку\n";
			break;
		}
		cout << endl<< endl;
	}
}