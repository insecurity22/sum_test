#include <cstdio>
#include "sum.h" // you should use "" for include made file from user

int main() {
	int n;
	scanf("%d", &n);
	int s = sum(n);
	printf("sum = %d\n", s);
}
