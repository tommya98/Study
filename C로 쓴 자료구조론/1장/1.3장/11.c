#include <stdio.h>

void func(int, int, int, int);

int main() {
	int n;
	printf("원판의 개수 : ");
	scanf("%d", &n);
	func(n, 1, 3, 2);

	return 0;
}

void func(int n, int a, int b, int c) {
	if (n == 1)
		printf("%d에서 %d(으)로 이동\n", a, b);
	else {
		func(n - 1, a, c, b);
		printf("%d에서 %d(으)로 이동\n", a, b);
		func(n - 1, c, b, a);
	}
}