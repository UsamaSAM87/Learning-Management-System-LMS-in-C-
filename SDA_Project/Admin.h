#pragma once
# include <iostream>
# include <fstream>
# include <string>
# include "Members_of_Institute.h"
using namespace std;

string course[50] = { "AI", "CN", "DIP", "ADB", "OS", "DB", "ALGO", "OOP", "DS", "PF" };
class Admin :public Members
{
	//string course[50]; 
	string section, department, dummy;
	static int course_ID, t; int credit_hours;
public:
	Admin() {
		section = "\0";
		/*course[0] = "AI"; course[1] = "CN"; course[2] = "DIP"; course[3] = "ADB";
		course[4] = "OS"; course[5] = "DB"; course[6] = "ALGO"; course[7] = "OOP";
		course[8] = "DS"; course[9] = "PF";*/
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
		m.set_member_attributes();
		return;
	}
	void add_teacher(Members& m)
	{
		m.set_member_attributes();
		return;
	}
	void add_student(Members& m)
	{
		m.set_member_attributes();
		return;
	}
	void add_course()
	{
		Admin a5;
		t = t + 1;
		course_ID += 1;
		cout << "\nEnter course name: ";
		getline(cin, course[t]);
		cout << "Enter department: ";
		getline(cin, department);
		cout << "Enter credit hours: ";
		cin>>credit_hours;
		getline(cin, dummy);
		cout << course[10] << "  " << department << "   " << credit_hours << endl;
		//a5.getFile();
	}
	void remove_course() {

	}
	void update_course() {

	}
	void print_courses() {
		for (int i = 0; i <= t; i++){
			cout << course[i] << "  ";
		}
		cout << endl;
	}
	
	void storeDataInFile()
	{
		Admin a;
		a.add_course();
		ofstream fout;
		fout.open("CourseData.txt");
		fout.write((char*)&a, sizeof(class Admin));
		fout.close();
	}
	void getFile()
	{
		Admin a;
		ifstream fin;
		fin.open("CourseData.txt");
		fin.read((char*)&a, sizeof(class Admin));
		while (!fin.eof())
		{
			a.print_courses();
			fin.read((char*)&a, sizeof(class Admin));
		}
		fin.close();
	}
};
int Admin::course_ID = 109;
int Admin::t = 9;