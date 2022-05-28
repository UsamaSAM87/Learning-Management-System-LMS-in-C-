#pragma once
# include <iostream>
# include <string>
# include "Members_of_Institute.h"
# include "Student.h"
using namespace std;
class Teacher :public Members
{
public:
	int size = 50;
	int** marks = new int* [size];
	Teacher() {
		for (int i = 0; i < size; i++) {
			marks[i] = new int[2];
			*marks[i] = 1;
		}
		/*for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < 2; j++) {
				cout << marks[i][j]<<" ";
			}
			cout << endl;
		}*/
	}
	void add_quiz();
	void add_mid();
	void add_marks(Student S, int examID) {
		int ro;
		cout <<  "Enter marks for uploading: ";
		cin >> ro; 
		int e = S.getID();
		marks[e][1] = ro;
		cout << "e is: " << e << endl;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < 2; j++) {
				cout << marks[i][j] << " ";
			}
			cout << endl;
		}
	}
	void add_grade();
	void add_assignment();
};