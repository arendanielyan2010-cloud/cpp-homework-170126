#include <stdio.h>

void reverse(int *arr, int size){
	int*skizb = arr;
	int*verj = arr + size - 1;

	while (skizb < verj){
		int tmp = *skizb;
		*skizb = *verj;
		*verj = tmp;
		skizb++;
		verj--;
	} 
}


int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr)/sizeof(int);
	reverse(arr, size);
	for (int i = 0; i < size; i++) {
        	printf("%d ", arr[i]);
	}
}
