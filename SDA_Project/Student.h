# include <iostream>
# include <string>
# include "Members_of_Institute.h"
using namespace std;
class Student :public Members
{
public:
	int exam_id; static int ID;
	Student() {
		exam_id = 0;
		ID = ID + 1;
	}
	int getID() {
		return ID;
	}
};
int Student::ID = -1;