#include<iostream>
using namespace std;
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int leapyear(int year) {
	return(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0;
}
int main()
{
	int y, d, month = 0, day, i;
	cin >> y >> d;
	days[1] += leapyear(y);
	i = 0;
	while (d > 0) {
		month = i + 1;
		day = d;
		break;
	}
	cout << month << endl;
	return 0;
}


