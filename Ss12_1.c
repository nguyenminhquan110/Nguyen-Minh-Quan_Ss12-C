#include <stdio.h>
float sum( float a, float b){
	return a+b;
}
int main(){
	float a,b, sum1;
	
	printf("Nhap so thu nhat: ");
	scanf("%f", &a);
	printf("Nhap so thu hai: ");
	scanf("%f", &b);
	
	sum1 = sum(a,b);
	printf("\nTong 2 so: %.2f", sum1);
	
	return 0;
}
