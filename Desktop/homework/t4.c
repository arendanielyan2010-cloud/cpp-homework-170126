#include <stdio.h>

int sum(int *arr, int size){
	int sum = 0;
	int *verj = arr + size;

	while (arr < verj){
		sum += *arr;
		arr++;
	}
	printf("%d\n", sum);
}

int main(){
	int arr[] = {1, 2, 3};
	int size = sizeof(arr)/sizeof(int);
	sum(arr, size);
}
