#pragma once
#include <iostream>
class Student
{
public:
	std::string Name;
	std::string LastName;
	int Age;
	Student() = default;
	void Print() 
	{
		std::cout << "I am a student" << std::endl;
	}
};

