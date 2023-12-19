#include<iostream>
using namespace std;
class student {
	public:
char name[20];
int grade;
	student(const char a[20]="0", int b=0) {
		strcpy_s(name, a);
		grade = b;
	}

};
void max(student a[]) {
	int n=a[0].grade;
	char h[20];
	strcpy_s(h, a[0].name);
	for (int i = 0;i < 5;i++) {
		if (a[i].grade >n) {
			strcpy_s(h, a[i].name);
		}
	}
	cout << h;
}
int main() {
	student m[5];
	for (int i = 0;i < 5;i++) {
		
		cin.get(m[i].name, 20);
		cin.get();
		cin >> m[i].grade;
		cin.get();
	}
	max(m);

}