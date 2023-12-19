#include<iostream>
using namespace std;
class Time             
{
private:
		int hour;
	int minute;
	int sec;
public:
	Time(int a, int b, int c) {
		hour = a;
		minute = b;
		sec = c;
	}
	void showtime() {
		cout << hour << "£º" << minute << "£º" << sec;
	}
};
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	Time t(a, b, c);
	t.showtime();

	return 0;
}
