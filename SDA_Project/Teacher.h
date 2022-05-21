#pragma once
# include <iostream>
# include <string>
# include "Members_of_Institute.h"
using namespace std;
class Teacher :public Members
{
public:
	void add_quiz();
	void add_mid();
	void add_marks();
	void add_grade();
	void add_assignment();
};