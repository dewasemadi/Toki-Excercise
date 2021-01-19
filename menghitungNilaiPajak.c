#include <stdio.h>

int main(){
long int a,b,c;
double d,e,f,p;
double total, pajak,revenue;

	scanf("%ld %lf", &a, &d);
	scanf("%ld %lf", &b, &e);
	scanf("%ld %lf", &c, &f);
	scanf("%lf", &p);
	
	total=(a*d)+(b*e)+(c*f);
	pajak= total*(p/100.0);
	revenue= total-pajak;
	
	printf("%.2lf %.2lf\n", pajak, revenue);
	return 0;
}
