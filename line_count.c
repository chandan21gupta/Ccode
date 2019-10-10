#include<stdio.h>

int main() {

	int c = getchar();
	int lc = 0;
	while(c != EOF) {
		if(c == '\n') {
			lc++;
		}
		c = getchar();
	}

	printf("%d",lc);

	return 0;
}
