#include <stdio.h>

int main(){
int a,b,c,d;
float x,y, hasil; //x=harga jual bebek kls 1, y=selisih harga berikutnya

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%f %f", &x, &y);
	
	hasil=(a*x)+b*(x+y)+c*(x+y+y)+d*(x+y+y+y); //perhitungan
	
	printf("%.2f", hasil);
return 0;
}
