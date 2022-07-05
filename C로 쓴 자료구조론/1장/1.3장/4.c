#include <stdio.h>

int main(void) {
	int x,y,z;

	printf("x는? ");
	scanf("%d", &x);
	printf("y는? ");
	scanf("%d", &y);
	printf("z는? ");
	scanf("%d", &z);

	if(x>y) {
		if(x>z){
			if(y>z)
				printf("%d %d %d\n",x,y,z);
			else
				printf("%d %d %d\n",x,z,y);
		}
		else
			printf("%d %d %d\n",z,x,y);
	}
	else {
		if(y>z){
			if(x>z)
				printf("%d %d %d\n",y,x,z);
			else
				printf("%d %d %d\n",y,z,x);
		}
		else
			printf("%d %d %d\n",z,y,x);
	}

	return 0;
}
