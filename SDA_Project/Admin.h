#pragma once
# include <iostream>
# include <string>
# include "Members_of_Institute.h"
using namespace std;
class Admin :public Members
{
	string course[50]; 
	string section, department, credit_hours;
	static int course_ID, t;
public:
	Admin() {
		section = "\0";
		course[0] = "AI"; course[1] = "CN"; course[2] = "DIP"; course[3] = "ADB";
		course[4] = "OS"; course[5] = "DB"; course[6] = "ALGO"; course[7] = "OOP";
		course[8] = "DS"; course[9] = "PF";
		/*for (int i = 0; i < 50; i++) {
			for (int j = 0; j < 50; j++) {
				for (int k = 0; k < 50; k++) {
					for (int l = 0; l < 50; l++) {
						for (int m = 0; m < 50; m++) {
							course = new char**** [50];
						}
					}
				}
			}
		}*/
	}
	void add_admin(Members& m)
	{
		m.set_member_attributes(/*2, "Usama", "18 Dec 2001", 923553, "um@gmail.com"*/);
		m.print_attributes();
		return;
	}
	void add_teacher(Members& m)
	{
		m.set_member_attributes(/*2, "Usama", "18 Dec 2001", 923553, "um@gmail.com"*/);
		m.print_attributes();
		return;
	}
	void add_student(Members& m)
	{
		m.set_member_attributes(/*2, "Usama", "18 Dec 2001", 923553, "um@gmail.com"*/);
		m.print_attributes();
		return;
	}
	void add_course()
	{
		t = t + 1;
		//cout << "T is: " << t << "\n";
		course_ID += 1;
		cout << "\nEnter course name: ";
		getline(cin, course[t]);
		cout << "Enter department: ";
		getline(cin, department);
		cout << "Enter credit hours: ";
		getline(cin, credit_hours);
		cout << course[10] << "  " << department << "   " << credit_hours << endl;
	}
	void remove_course() {

	}
	void print_courses() {
		for (int i = 0; i <= t; i++){
			cout << course[i] << "  ";

		}
		cout << endl;
		/*for (int i = 0; i < 50; i++) {
			for (int j = 0; j < 50; j++) {
				for (int k = 0; k < 50; k++) {
					for (int l = 0; l < 50; l++) {
						cout << course[i];
					}
				}
			}
		}*/
	}
};
int Admin::course_ID = 109;
int Admin::t = 9;