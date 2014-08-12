#include <iostream>
using namespace std;

class Student{
public:
	int num;
	char name[20];
	char sex;
	void display()
	{
	 	cout<<"num:"<<num<<endl;
	}
};
int main(){
	Student stud1,stud2;
	stud1.num = 10;
	cout << stud1.num;
	return 0;
}