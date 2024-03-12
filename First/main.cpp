#include<iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	//Задание 1
	
	int num;
	int sum = 0;
	do
	{
		std::cout << "Введите целое число до 500: \n";
		std::cin >> num;
	} while (num > 500);
	while (num != 501)
	{
		sum += num;
		num++;
	}
	std::cout << "Сумма всех чисел до 500 от заданного: " << sum << "\n\n\n";
	
	//Задание 2
	int x;
	int y;
	float result;
	int counter = 0;
	std::cout << "Введите целое число: \n";
	std::cin >> x;
	std::cout << "Введите степень: \n";
	std::cin >> y;
	if (y > 0)
	{
		result = x;
		while (counter != y-1)
		{
			result = result * x;
			counter++;
		}
	}
	else if (y < 0)
	{
		result = x;
		while (counter != y+1)
		{
			result = result * x;
			counter--;
		}
		result = 1 / result;
	}
	else
	{
		result = 0;
	}
	std::cout << x << " В степени " << y << " = " << result << "\n\n\n";

	//Задание 3
	int counter2 = 1;
	int sum2 = 0;
	
	while (counter2 != 1000)
	{
		sum2 += counter2;
		counter2++;
	}
	std::cout << "Среднее арифметическое от 1 до 1000: " << sum2 / counter2 << "\n\n\n";

	//Задание 4
	int a;
	int counter3;
	long long total = 1;
	do
	{
		std::cout << "Введите число от 1 до 20 включительно: \n";
		std::cin >> a;
	} while (a < 1 || a > 20);
	
	while (a != 20)
	{
		total *= a;
		a++;
	}
	std::cout << "Произведение всех чисел от введённого до 20 - " << total << "\n\n\n";

	
	
	//Задание 5
	int nom;
	int i = 1;
	std::cout << "Введите число: \n";
	std::cin >> nom;
	while (i != 11)
	{
		std::cout << nom << " * " << i << " = " << nom * i << "\n";
		i++;
	}
	return 0;
}