#pragma once
#include <iostream>
#include "Student.h"
class Aspirant : public Student
{
public:
	void Print() 
	{
		std::cout << "I am a aspirant" << std::endl;
	}
};

