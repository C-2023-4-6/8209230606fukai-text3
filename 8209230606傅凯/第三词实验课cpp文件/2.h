#pragma once
#include <iostream>
using namespace std;
class Student {
public:
	void display();
	Student(int a = 0,const char name1[20]="lin", char sex1 = '1') {
		num = a;
		
		strcpy_s(name, name1);
		sex = sex1;
	}
private:
	int num;
	char name[20];
	char sex;
};