#include <stdio.h>

/* count space, \t, \n */
int main()
{
	int c, ns, nt, nn;

	ns = 0;
	nt = 0;
	nn = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++ns;
		} else if (c == '\t') {
			++nt;
		} else if (c == '\n') {
			++nn;
		}
	}
	printf("space: %d, nt: %d, nn: %d", ns, nt, nn);
}