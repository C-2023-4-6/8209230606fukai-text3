#include<iostream>
using namespace std;
class volume {
private:int width;
	   int higth;
	   int length;
public:
	volume(int a, int b, int c) {
		width = a;
		higth = b;
		length = c;
	}
	void show() {
		cout << "Με»ύ£Ί" << width * higth * length << endl;
	}
};
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	volume volume1(a, b, c);
	volume1.show();
}