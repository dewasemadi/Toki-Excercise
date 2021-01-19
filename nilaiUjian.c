#include <stdio.h>

int main(){
	float a,b,c,d;
	scanf("%f %f %f", &a, &b, &c);
	
	d=(a+b+c)/3;
	
	if(d>=60)
		printf("%.2fBAIK", d);
	else if(d>=30)	
		printf("%.2fCUKUP", d);
	else 
		printf("%.2fKURANG", d);
		
return 0;
}
