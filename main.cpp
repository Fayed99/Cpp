#include <iostream>
void greeting()
{
	std::cout << "Hello,There!\n";
}
void enter_bar(unsigned int age)
{
	if (age >= 18)
	{
		std::cout << "Welcome to the bar. What would you like to drink?\n";
	}
	else
	{
		std::cout << "You're too young to be in a bar!\n";
	}
}
void number(size_t num)
{
	for (size_t i = 0; i < num; i++)
	{
		if (i <= 17)
		{

			std::cout << "You have reached " << i << " yet!\n";
		}
		else
		{
			std::cout << "You have reached: " << i << "\n";
		}
	}
}

int lucky_number(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}