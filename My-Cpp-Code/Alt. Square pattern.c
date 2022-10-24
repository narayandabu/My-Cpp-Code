#include <stdio.h>

int main()
{
	int n, m = 10,b=1;
	scanf("%d", &n);
	for (int i = 0; i < n; )
	{
		
		
		for (int j = 1; j <= 5; j++)
		{
			printf("%d ",b);
			b++;
		}
		i++;
		if (i==n)
		{
			break;
		}
		
		printf("\n");
		b=b+5;
		for (int k = 0; k <5; k++)
		{
			printf("%d ",m);
			m--;
		}
		i++;
		m=m+15;
		printf("\n");
		
		
		
	}
	
	
	return 0;
}
