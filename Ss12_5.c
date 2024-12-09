#include <stdio.h>
int snt(int number, int number2){
	int Snt=0;
	int Snt2=0;
	if(number==1){
		Snt=1;
	}
	for(int i=2;i<number;i++){
		if(number%i==0){
			Snt=1;
		}
	}
	if(Snt==0){
		printf("so nguyen to : %d\n",number);
	}else{
		printf("so %d khong phai so nguyen to\n",number);
	}
	if(number2==1){
		Snt=1;
	}
	for(int i=2;i<number2;i++){
		if(number2%i==0){
			Snt2=1;
		}
	}
	if(Snt2==0){
		printf("so nguyen to : %d\n",number2);
	}else{
		printf("so %d khong phai so nguyen to\n",number2);
	}
	return 0;
}
int main(){
	int number,number2;
	printf("nhap so nguyen thu nhat : ");
	scanf("%d",&number);
	printf("nhap so nguyen thu hai : ");
	scanf("%d",&number2);
	snt(number,number2);
	return 0;
}
