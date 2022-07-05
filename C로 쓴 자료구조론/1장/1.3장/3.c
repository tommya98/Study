#include <stdio.h>

void func(int);

int main(void) {
	int n;

	printf("n의 개수 : ");
	scanf("%d",&n);

	if(n == 0)
		printf("가능한 경우의 수가 없습니다.");
	else{
		func(n);
	}

	return 0;
}

void func(int n) {
	int a, b, max = 1;
	for(int i = 0; i < n; i++) {
		max *= 2;
	}
	for(int i = 0; i < max; i++){
		printf("< ");
		a = i;
		for(int j = 0; j < n; j++) {
			b = a % 2;
			a /= 2;
			if(!b)
				printf("FALSE ");
			else
				printf("TRUE  ");
		}
	printf(">\n");
	}
}
