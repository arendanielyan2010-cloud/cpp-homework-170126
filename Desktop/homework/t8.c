#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	unsigned char * ptr = (unsigned char *)&x;
	for (int i = 0; i < sizeof(int); i++){
		printf("%d: %u\n", i, ptr[i]);
	}
}
