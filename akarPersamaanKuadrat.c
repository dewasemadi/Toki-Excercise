#include <stdio.h>
#include <math.h>

int main(){
float a,b,c;
int hasil;
	scanf("%f %f %f", &a,&b,&c);
	hasil=sqrt((b*b)-4*a*c);
	if(hasil>0)
		printf("2\n");
	else if(hasil==0)
		printf("1\n");
	else printf ("0\n");
return 0;
}
