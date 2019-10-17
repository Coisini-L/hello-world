//实现代码判断2个float变量相等
//误差精确到小数点后5位
#include <stdio.h>
int main ()
{
	float m,n;
	printf("Input M & N:");
	scanf("%f%f",&m,&n);
	m = ((int)(m*100000))/100000;
	n = ((int)(n*100000))/100000;
	if(m == n){
		printf("Yes");
		}
	else{
	    printf("No");
   }
}
