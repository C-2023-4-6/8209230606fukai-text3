#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int a = 60, int b = 80) {
		x = a;
		y = b;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 60 + j;
	}
	void display(){
		cout << "(" << x << "," << y << ")" << endl;
		
	}
};
int main() {
	Point m;
	int o, p;
	cin >> o >> p;
	m.setPoint(o, p);
	m.display();
}