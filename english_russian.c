#include <stdio.h>
int main ()
{
	int a,b,c,d;
	printf("Input the number of people in the travel agency：\n");
	scanf("%d",&a);
	printf("Input how many people can speak English：\n");
	scanf("%d",&b);
	printf("Input how many people can speak Russian：\n");
	scanf("%d",&c);
	printf("Input how many people can't speak both languages：\n");
	scanf("%d",&d);
	if(b+d<a && c+d<a && b+c+d>a){
		printf("People can speak both languages：%d",b+c-a+d);	
	}
	else
	 printf("Input data error, unable to calculate\n");
	return 0;
}
  
//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算
