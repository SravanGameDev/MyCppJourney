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
			std::cout << i << " * " << j<<" = " << i * j << std::endl;
		}
		std::cout << "\n";
	}
}

void DrawShape()
{
	int height, width;
	char symbol;
	std::cout << "Enter a height: ";
	std::cin >> height;
	std::cout << "Enter a width: ";
	std::cin >> width;
	std::cout << "Enter a symbol-> ";
	std::cin >> symbol;
	
	for (size_t h = 0; h < height; h++)
	{
		for (size_t w = 0; w < width; w++)
		{
			std::cout << " " << symbol<<" ";
		}
		std::cout << std::endl;
	}
}