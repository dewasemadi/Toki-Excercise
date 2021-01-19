#include <stdio.h>
int main(){
int jam1, menit1, detik1;
int jam2, menit2, detik2;
int a,b, durasi;
	scanf("%d %d %d", &jam1, &menit1, &detik1);
	scanf("%d %d %d", &jam2, &menit2, &detik2);

	a=(jam1*3600)+(menit1*60)+detik1;
	b=(jam2*3600)+(menit2*60)+detik2;
	
	if(b<a){
		b+=86400;
	durasi=b-a;
}
	durasi=b-a;
	printf("%d", durasi);
return 0;
}
