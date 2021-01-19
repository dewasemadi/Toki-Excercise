#include <stdio.h>
#include <float.h>

int main()
{
	int i=0, n; 
	double data, sum=0, average,  max= FLT_MIN, min=FLT_MAX;
	scanf("%d", &n);
	while(i<n)
	{
		scanf("%lf", &data);
		sum+=data;
		if(max<data)
		{
			max=data;
		}
		if(min>data)
		{
			min=data;
		}
		i++;
	}
	average=sum/n;
	printf("%.2lf %.2lf %.2lf\n", min, max, average);
	return 0;
}
