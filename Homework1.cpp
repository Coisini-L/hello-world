#include <stdio.h>
int main (void)
{
	int m,n,p,i;
	printf("Input m & n:");
	scanf("%d%d",&m,&n);
    if(m<n)
    {
    	p = m;
    	m = n;
    	n = p;
    	
	}
	for(i=m; i>0; i++)
	   if (i%m==0 && i%n==0)
{
		printf(" %d\n ",i);
		break;
		
}
    return 0;
	
}
