#include <stdio.h>
int factorial( int a){
	int factorial = 1;
	if ( a == 0){
		return factorial;	
	}
	
	for ( int i = 2; i<=a; i++){
		factorial *= i ;
	}
	return factorial;
}
int main(){
	int a;
	
	printf("Nhap so nguyen duong muon tinh giai thua: ");
	scanf("%d", &a);
	
	if ( a<0 ){
		printf("\nKhong co giai thua cua so am!");
		return 0;
	}
	
	printf("\n Ket qua: %d", factorial(a));
	return 0;
}
