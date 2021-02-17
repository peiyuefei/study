#include<iostream>
#include<stdlib.h>
using namespace std;
const int N = 1000;
const int N2 = 10000;
int a[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int main = N2;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++) {
			int d = abs(a[i] - a[j]);
			if (d < main)
				main < d;
		}
	cout << main << endl;
	return 0;
}
