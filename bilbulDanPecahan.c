#include <stdio.h>
int a;
long int b;
double c;

int main()
{
	scanf("%d %ld", &a, &b);
	scanf("%lf", &c);

	printf("%d %.2lf %ld\n", a, c, b);

	return 0;
}
