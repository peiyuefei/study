#include<iostream>
using namespace std;
int main()
{
	int n, i;
	bool f;
	cout << ":\n";
		cin >> n;
	f = true;
	for (i = 2; i <= sqrt((double)n); i++)
	{
		if (n % i == 0)
		{
			f = false;
			break;
		}
	}
	if (f = true)cout << n<<"������!" << endl;
	else cout << n <<"����������"<< endl;
	return 0;
}