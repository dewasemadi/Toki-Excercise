#include <stdio.h>
int main(){
double pi=3.14, r;
double d;
double k, l;
	scanf("%lf", &d);
	r=(d*0.5);
	k=2*pi*r;
	l=pi*r*r;
	printf("%.2lf %.2lf\n", k, l);
return 0;
}
