//To class student to store and display the details
#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
	void display(){
		cout << "Name: " << name << endl;
		cout << "Roll no: " << rollno << endl;
	}
};
int main(){
	student s1;
	s1.name = "raj";
	s1.rollno = 101;
	s1.display();
}