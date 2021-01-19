#include <stdio.h>
#include <math.h>

int main(){
int x1, y1; //bebek 1
int x2, y2; //bebek 2
int x3, y3, jarak1, jarak2; //posisi pak algor
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	
	jarak1=sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
	jarak2=sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
		
	if (jarak1<jarak2)
		printf("1\n");
	else if (jarak1==jarak2)
		printf("12\n");
	else printf("2\n");
	return 0;
}
