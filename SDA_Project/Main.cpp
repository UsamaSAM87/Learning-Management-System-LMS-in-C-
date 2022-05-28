# include <iostream>
# include <string>
# include "Admin.h"
# include "Teacher.h"
//# include "Student.h"
using namespace std;
int main()
{
	cout << "Welcome to ABC LMS powered by SAmSoft" << endl;
	cout << "Loading data....\n";
	cout << "Loading dll's....\n";
	cout << "Synchronising binary assets....\n";
	cout << "Establishing connection with server....\n";
	cout << "Connected with linkages....\n";
	cout << "Genterating preview....\n";
	cout << "Loading dashboard....\n";
	cout << "!!!\n";
	cout << ".............\n";
	cout << "Welcome to ABC :)\n";
	cout << ".............\n";
	int R;
	cout << "Press 1 to proceed or any other key to exit:  ";
	cin >> R;
	if (R == 1) {
		system("cls");
	}
	else if (R != 1) {
		return 0;
	}
	cout << ".............\n";
	cout << ".............\n";
	int choice=0; 
	string exe;
	Admin a1; Admin a2;
	Members m1; Members m2;
	Student S;
	do {
		cout << endl;
		cout << "Enter 1 to add new admin\n";
		cout << "Enter 2 to add new teacher\n";
		cout << "Enter 3 to add new student\n";
		cout << "Enter 4 to add a new course\n";
		cout << "Enter 5 to remove an existing course\n";
		cout << "Enter 6 to print course details\n";
		cout << "Enter 0 to exit :( \n";
		cout << endl;
		cin >> choice;
		getline(cin, exe);
		if (choice == 1) {
			
			a1.add_admin(m1);
		}
		else if (choice == 2) {
			//a1.add_teacher(m1);
			Teacher t1;
			
			t1.add_marks(S, 23);
		}
		else if (choice == 3) {
			a1.add_student(m1);
		}
		else if (choice == 4) {
			a1.add_course();
		}
		else if (choice == 5) {

		}
		else if (choice == 6) {
			a1.print_courses();
		}
	} while (choice!=0);
	

	
	
}