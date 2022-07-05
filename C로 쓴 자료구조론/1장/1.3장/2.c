#include <stdio.h>

int main(void){
	// 간단하게 3차 다항식에 대해서 구현
	float result = 0;
	float coef[4]=  {0, 0, 0, 0};
	float x = 0;

	printf("X의 값은? : ");
	scanf("%f",&x);

	printf("3차항의 계수는 : ");
	scanf("%f", &coef[0]);
	printf("1차항의 계수는 : ");
	scanf("%f", &coef[1]);
	printf("2차항의 계수는 : ");
	scanf("%f", &coef[2]);
	printf("상수항의 계수는 : ");
	scanf("%f", &coef[3]);

	result = ((coef[0]*x+coef[1])*x+coef[2])*x+coef[3];

	printf("결과 : %f", result);

	return 0;
}
