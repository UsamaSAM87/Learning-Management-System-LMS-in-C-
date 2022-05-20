#pragma once
# include <iostream>
# include <string>
# include "Members_of_Institute.h"
using namespace std;
class Admin
{
	string course[100], section, department, credit_hours;
	static int course_ID;
public:
	Admin() {
		course[100] = "\0"; section = "\0";
	}
	void add_admin(Members& m)
	{
		m.set_member_attributes(/*2, "Usama", "18 Dec 2001", 923553, "um@gmail.com"*/);
		m.print_attributes();
		return;
	}
	void add_course()
	{
		course_ID += 1;
		cout << "\nEnter course name: ";
		getline(cin, course[10]);
		cout << "Enter department: ";
		getline(cin, department);
		cout << "Enter credit hours: ";
		getline(cin, credit_hours);
		cout << course[10] << "  " << department << "   " << credit_hours << endl;
	}
};
int Admin::course_ID = 99;