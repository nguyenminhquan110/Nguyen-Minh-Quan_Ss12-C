#include <stdio.h>

int hoanHao(int num, int num2){
	int sum=0,sum2=0;
	for(int i=1;i<num;i++){
		if(num%i==0){
		   sum=sum+i;
		}
	}
	if(sum==num){
		printf("so %d la so hoan hao\n",num);
	}else{
		printf("so %d khong phai la so hoan hao\n",num);
	}
	for(int i=1;i<num2;i++){
		if(num2%i==0){
		   sum2=sum2+i;
		}
	}
	if(sum2==num2){
		printf("so %d la so hoan hao",num2);
	}else{
		printf("so %d khong phai la so hoan hao",num2);
	}
	return 0;
}

int main(){
	int num,num2;
	printf("nhap so nguyen bat 1 : ");
	scanf("%d",&num);
	printf("nhap so nguyen thu 2 : ");
	scanf("%d",&num2);
	hoanHao(num,num2);
	return 0;
}
