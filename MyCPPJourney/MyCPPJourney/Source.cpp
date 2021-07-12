#include<iostream>

void StudentResult();

int main()
{
	StudentResult();

	system("pause>0");
}


void StudentResult()
{
	int subjects;
	int grade;
	int sum=0;
	std::cout << "Grading System from 1 to 10";
	std::cout << "\nHow many subjects do you have? ";
	std::cin >> subjects;

	for (size_t i = 0; i < subjects; i++)
	{
		do
		{
			std::cout << "Enter your first subject grade "<<i+1<<": ";
			std::cin >> grade;
		} while (grade<1 || grade >10);

		sum += grade;
	}

	std::cout << "Total points: " << sum;
	std::cout << "\nAverage grade: " << sum/subjects;
}