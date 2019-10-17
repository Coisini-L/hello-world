#include<stdio.h>
int main (void)
{
	int m,n;
	printf("Input m & n:");
	scanf("%d%d", &m,&n);
	int x,i;
     for (i = 1; i <= n; i++)
{
      if (m % i == 0 && n % i ==0)
           if(i > x)
               x = i;
           }
	if (x == 1)
	{
		printf("ÊÇ");
	}
	else{
		printf("·ñ");
	}
}
