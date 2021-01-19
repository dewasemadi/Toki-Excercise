#include <stdio.h>
#include <math.h>

int main() {
double a, c;
int b;
		scanf("%lf", &a);
		b=floor(a);
		c=a-b;
		printf("%d %.5lf\n", b, c);
	return 0;
}
