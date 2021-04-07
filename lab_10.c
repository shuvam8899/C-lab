#include <stdio.h>

int main() {
int i ,max ,N ,x;
	printf("Enter N : ");
	scanf("%d",&N);
	max=0;
	for(i=1;i<=N;i++)
	{
		printf("Enter the all the numbers to find max\n",i);
		scanf("%d",&x);

		if(max < x)
			max = x;
	}
	printf("\n max = %d",max);
	return 0;
}
