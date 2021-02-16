#include<iostream>
using namespace std;
const int L = 1000;
int pos[L + 1], step[L + 1];
int main()
{
	int n, l, t;
	cin >> n >> l >> t;
	for (int i = 0; i < n; i++) {
		cin >> pos[i];
		step[i] = 1;
		if (pos[i] == 1 || pos[i] == 0)
			step[i] = -step[i];
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
			pos[j] += step[j];
			if (pos[j] == l || pos[j] == 0)
				step[j] = -step[j];
		}
		for (int j = 0; j < n; j++)
			for (int k = j + 1; k < n; k++)
				if (pos[k] == pos[j])
					step[k] = -step[k], step[j] = -step[j];
	}
	for (int i = 0; i < n; i++)
		cout << pos[i] << "";
	cout << endl;
	return 0;
}