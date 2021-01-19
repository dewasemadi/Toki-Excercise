#include <stdio.h>

int main(){
char ch;
	scanf("%c", &ch);
	switch (ch)
	{
		case 'A': printf("4\n"); break;  
		case 'B': printf("3\n"); break;
		case 'C': printf("2\n"); break;
		case 'D': printf("1\n"); break;
		case 'E': printf("0\n"); break;
		
		case 'a': printf("4\n"); break;  
		case 'b': printf("3\n"); break;
		case 'c': printf("2\n"); break;
		case 'd': printf("1\n"); break;
		case 'e': printf("0\n"); break;
		
	default: printf("-1\n"); break;
	}
	return 0;
}

