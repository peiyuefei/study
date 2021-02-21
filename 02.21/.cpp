#include<stdio.h>
#define N 1000
int a[N];
int main(void)
{
	int n, i, count;
	scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	count = 0;
	for (i = 1; i < n - 1; i++)
		if ((a[i - 1]<a[i] && a[i]>a[i + 1]) || (a[i - 1] > a[i] && a[i] < a[i + 1]))
			count++;
	printf("%d\n", count);
	return 0;
}