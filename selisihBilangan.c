#include <stdio.h>

int main(){
	long int a,b,c,d,A,B,C,D,E,F;
	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
	
	A=a-b;
	B=b-c;
	C=c-d;
	D=b-a;
	E=c-b;
	F=d-c;
	
	if(A>B && A>C && A>D && A>E && A>F)
		printf("%ld\n", A);
	else if (B>A && B>C && B>D && B>E && B>F)
		printf("%ld\n", B);
	else if (C>A && C>B && C>D && C>E && C>F)
		printf("%ld\n", C);
	else if (D>A && D>B && D>C && D>E && D>F)
		printf("%ld\n", D);
	else if (E>A && E>B && E>C && E>D && E>F)
		printf("%ld\n", E);
	else 
		printf("%ld\n", F);

return 0;
}

