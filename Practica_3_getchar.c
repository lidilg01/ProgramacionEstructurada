#include <stdio.h>

/* lidia Lozano Guajardo - 1902187 */

int main() {
	char c;
	printf("Enter a number: ");
	c=getchar();
	int a=(int) c;
	if(48<=a&& a<=57){
		printf("Numeber entered: ");
	}else{
		if(65<=a && a<=90){
			printf("Upper alphabetic entered: ");
		}else{
			if(97<=a && a<=12){
				printf("Lower alphabetic entered:");
			}else{
				printf("Symbol entered:");
			}
		}
	}
	putchar(c);
	printf("\n");
	return 0;
}
