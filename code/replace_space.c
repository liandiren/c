#include <stdio.h>

#define NONBLANK 'a'

int main()
{
	/* if has continues space, replace to one space */
	int c, lastc;

	lastc = NONBLANK;
	while ((c = getchar()) != EOF) {
		/* 当前不为空或者前一个不为空, 即不连续空则输出 */
		if (c != ' ' || lastc != ' ') {
			putchar(c);
		}
		lastc = c;
	}
}
