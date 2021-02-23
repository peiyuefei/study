#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int m, p = 1,i, sum = 0;
	cout << "please input m!" << endl;
	cin >> m;
	for (i=:i=m i++)
	{
		p = p * i;
		sum += p;
	}
	cout << m << "!=" << p << endl;
	return 0;
}