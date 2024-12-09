#include <stdio.h>
void show( int arr[], int n){
	for ( int i =0; i<n ; i++){
		printf("\t%d", arr[i]);
	}
}
int main(){
	int arr[9] = {23,11,78,66,77,-9,-7,0,13};
	
	printf("Phan tu trong mang: ");
	show(arr, 9);
	
	return 0;
}
