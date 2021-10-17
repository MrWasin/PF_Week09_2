#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int isPrime(int);

int main()
{
	int x[100], num = 0, i = 0;
	while (num == 0) {
		scanf("%d", &x[i]);
		if (isPrime(x[i]) == 1) {
			printf("%d is Prime Number", x[i]);
			num = 1;
		}
		i++;
	}
	return 0;
}

int isPrime(int a)
{
	int i = 2;
	while (a % i != 0 && a >= i) {
		i++;
	}
	if (i == a)
		return 1;
	else
		return 0;
}