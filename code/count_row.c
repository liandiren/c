#include <stdio.h>

int main()
{
	int rows, c;
	
	rows = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++rows;
		}
	}
	printf("num of rows is : %d\n", rows);
}