#include "ExampleLoops.h"
#include<iostream>

void NestedLoops()
{
	int subjects;
	float grade;
	int sum = 0;
	std::cout << "Grading System from 1 to 10";
	std::cout << "\nHow many subjects do you have? ";
	std::cin >> subjects;

	for (size_t i = 0; i < subjects; i++)
	{
		do
		{
			std::cout << "Enter your first subject grade " << i + 1 << ": ";
			std::cin >> grade;
		} while (grade < 1 || grade >9);

		sum += grade;
	}

	std::cout << "Total points: " << sum;
	std::cout << "\nAverage grade: " << sum / subjects;
}

void NestedForLoop()
{
	for (size_t i = 1; i <= 10; i++)
	{
		for (size_t j = 1; j <= 10; j++)
		{
			std::cout << i << "*" << j<<"=" << i * j << std::endl;
		}

		std::cout << "____________________________________\n";
	}

}