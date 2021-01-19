#include <stdio.h>

int main(){
	long int a,b,c,d;
	scanf("%ld %ld %ld %ld", &a,&b,&c,&d);
	
	if(a==b && b==c && c==d)
		printf("KONSTAN\n");
	else if(d>=c && c>=b && b>=a)
		printf("MONOTON MENAIK\n");
	else if(d<=c && c<=b && b<=a)
		printf("MONOTON MENURUN\n");
	else 
		printf("TIDAK MONOTON\n");
		
return 0;
}
