#include <stdio.h>

int main(){
	int a = 4;
	int*ptr = &a;
	printf("popoxakani arjeqy: %d\n", a);
	printf("popoxakani hascen: %p\n", &a);
	printf("pointeri meji hascen: %p\n", ptr);
	printf("pointerov bacac arjeqy: %d\n", *ptr);
}
