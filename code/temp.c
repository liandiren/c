#include <stdio.h>

#define MAX 300
#define MIN 0
#define STEP 20

int main()
{
	float f_temp, c_temp;
	f_temp = MAX;
	while (f_temp >= MIN) {
		c_temp = (5.0/9.0)*(f_temp-32);
		printf("%3.0f\t%6.1f\n", f_temp, c_temp);
		f_temp -= STEP;
	}
}
