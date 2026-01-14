#include <stdio.h>

int*max(int*arr, int size){
	int*mec = arr;
	for(int *i = arr + 1; i < arr + size; i++){
		if (*i > *mec) {
			mec = i;
		}
	}
	printf("Mecaguyni hascen: %p\n", mec);
	printf("arjeqy: %d", *mec);
}

int main(){
	int arr[]={1, 2, 3, 4};
	int size = sizeof(arr)/sizeof(int);
	max(arr, size);
}
