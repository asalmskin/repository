#include <stdio.h>

//this is a comment 

int main () {
	int num, num2, n;
	printf("hi this is a simple code!\n");
	printf("how many times?\n");
	scanf("%d", &n);
	for(int i = 0, i < n; i++) {
		printf("please enter your numbers:\n");
		scanf("%d%d", &num, &num2);
		printf("the answer is %d\n", num + num2);
	}
	return 0;
}
