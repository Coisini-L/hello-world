//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。

//使用全排列函数 
#include <stdio.h>
//声明函数 
void swap(int arr[],int i,int j);	//交换 
void save(int arr[]);		//保存所有排列的数 
void perm(int arr[],int p,int q); //全排列 
int num[120];			//保存所有出现的组合 
int j=0; 
void maopao(int num[]);		//	冒泡从小到大排序 
void sushu(int num[]);		//找出最大素数 


//使用函数 
void main()
{
	int arr[5];	
	int i;			
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	perm(arr,0,4);
	maopao(num);
	sushu(num);
}



//定义函数 
void swap(int arr[],int i,int j){		//全排列时使用的交换函数 
	int t=arr[i];
	arr[i]=arr[j];
	arr[j]=t;
}

void save(int arr[]){
	num[j++]=arr[0]*10000+arr[1]*1000+arr[2]*100+arr[3]*10+arr[4];
}

void perm(int arr[],int p,int q){		//全排序 
	if(p==q){
		save(arr);
	}
	else{
		int i;
		for(i=p;i<=q;i++){
			swap(arr,p,i);
			perm(arr,p+1,q);
			swap(arr,p,i);
		}
	}
}

void maopao(int num[]){
	int i,j;
	for(i=1;i<120;i++){
		for(j=0;j<120-i;j++){
			if(num[j]<num[j+1]){
				int t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
}

void sushu(int num[]){
	int s=0;
	int i,j; 
	int count=0;
	for(i=num[s];i>=0,s<120;i=num[++s]){
		int flag=1;				//标志位 
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		count++;
		if(flag==1){			//从大到小排序,找到第一个素数就是最大素数 
			printf("%d",i);
			break;
		}
	}
	if(count==120){
		printf("ERROR"); 
	}
}







//多次for循环 
/* 
#include <stdio.h>
int fun(int n)                  //判断一个数是否是素数 
{
 int i;
 for(i=2;i<n;i++)
 {
  if(n%i==0)
  {
   return 1;                 //不是素数 
  }
 }
 return 0;                   //是素数 
}

int main()
{
 int a[5];                   //存放5个数字的数组 
 int b[120],x=0;             //存放全排列中为素数的组合的数组，x为该数组的下标 
 int i,j,k,m,n;              //5个循环变量 
 int num;                    //排列组合后的数字 
 int max;                    //最大值 
 int flag=1;				//标志位 
 //将5个数字依次放入数组中 
 printf("请输入5个数字：");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]); 
 } 
 
 for(i=0;i<5;i++)           //第一个循环变量，取值范围为0~4，可以取到5个不同的数字 
 {
  for(j=0;j<5;j++)       
  {
   if(i==j)
    continue;      //第二个循环变量，取值范围为0~4，除去i用过的值 
   for(k=0;k<5;k++)
   {
    if(i==k || j==k)
     continue;  //第三个循环变量，取值范围为0~4，除去i，j用过的值  
    for(m=0;m<5;m++)
    {
     if(i==m || j==m || k==m)
      continue;//第四个循环变量，取值范围为0~4，除去i，j，k用过的值 
     for(n=0;n<5;n++)
     {
      if(i==n || j==n || k==n || m==n)
       continue; //第五个循环变量，取值范围为0~4，除去i，j,k,m用过的值 
      num=a[i]*10000+a[j]*1000+a[k]*100+a[m]*10+a[n]; //组合成一个五位数 
      if(num>10000 && fun(num)==0)       //判断该数字是否是素数 
      {
       b[x++]=num;                   //如果是素数，存入数组b
       flag=0;
      }
     }
    }
   } 
  }
 } 
 //求最大值 
if(flag==1){
	printf("ERROR");
}else{
	 max=b[0];
 for(i=1;i<x;i++)
 {
  if(max<b[i])
   max=b[i];
 }
 printf("最大值为：%d\n",max);
}
 return 0;
}   */ 
