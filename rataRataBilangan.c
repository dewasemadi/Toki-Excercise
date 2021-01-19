#include <stdio.h>
int main()
{
	int n, i, data, sum=0;
	float average;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &data);
		sum+=data;
	}
	average=(float)sum/n;
	printf("%.3f\n", average);
	return 0;
}