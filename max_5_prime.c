//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ
//�����������λ����_______��
//��̣���������5�����֣����������Ϊ����5λ������������������5λ�����������ERROR��

//ʹ��ȫ���к��� 
#include <stdio.h>
//�������� 
void swap(int arr[],int i,int j);	//���� 
void save(int arr[]);		//�����������е��� 
void perm(int arr[],int p,int q); //ȫ���� 
int num[120];			//�������г��ֵ���� 
int j=0; 
void maopao(int num[]);		//	ð�ݴ�С�������� 
void sushu(int num[]);		//�ҳ�������� 


//ʹ�ú��� 
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



//���庯�� 
void swap(int arr[],int i,int j){		//ȫ����ʱʹ�õĽ������� 
	int t=arr[i];
	arr[i]=arr[j];
	arr[j]=t;
}

void save(int arr[]){
	num[j++]=arr[0]*10000+arr[1]*1000+arr[2]*100+arr[3]*10+arr[4];
}

void perm(int arr[],int p,int q){		//ȫ���� 
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
		int flag=1;				//��־λ 
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		count++;
		if(flag==1){			//�Ӵ�С����,�ҵ���һ����������������� 
			printf("%d",i);
			break;
		}
	}
	if(count==120){
		printf("ERROR"); 
	}
}







//���forѭ�� 
/* 
#include <stdio.h>
int fun(int n)                  //�ж�һ�����Ƿ������� 
{
 int i;
 for(i=2;i<n;i++)
 {
  if(n%i==0)
  {
   return 1;                 //�������� 
  }
 }
 return 0;                   //������ 
}

int main()
{
 int a[5];                   //���5�����ֵ����� 
 int b[120],x=0;             //���ȫ������Ϊ��������ϵ����飬xΪ��������±� 
 int i,j,k,m,n;              //5��ѭ������ 
 int num;                    //������Ϻ������ 
 int max;                    //���ֵ 
 int flag=1;				//��־λ 
 //��5���������η��������� 
 printf("������5�����֣�");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]); 
 } 
 
 for(i=0;i<5;i++)           //��һ��ѭ��������ȡֵ��ΧΪ0~4������ȡ��5����ͬ������ 
 {
  for(j=0;j<5;j++)       
  {
   if(i==j)
    continue;      //�ڶ���ѭ��������ȡֵ��ΧΪ0~4����ȥi�ù���ֵ 
   for(k=0;k<5;k++)
   {
    if(i==k || j==k)
     continue;  //������ѭ��������ȡֵ��ΧΪ0~4����ȥi��j�ù���ֵ  
    for(m=0;m<5;m++)
    {
     if(i==m || j==m || k==m)
      continue;//���ĸ�ѭ��������ȡֵ��ΧΪ0~4����ȥi��j��k�ù���ֵ 
     for(n=0;n<5;n++)
     {
      if(i==n || j==n || k==n || m==n)
       continue; //�����ѭ��������ȡֵ��ΧΪ0~4����ȥi��j,k,m�ù���ֵ 
      num=a[i]*10000+a[j]*1000+a[k]*100+a[m]*10+a[n]; //��ϳ�һ����λ�� 
      if(num>10000 && fun(num)==0)       //�жϸ������Ƿ������� 
      {
       b[x++]=num;                   //�������������������b
       flag=0;
      }
     }
    }
   } 
  }
 } 
 //�����ֵ 
if(flag==1){
	printf("ERROR");
}else{
	 max=b[0];
 for(i=1;i<x;i++)
 {
  if(max<b[i])
   max=b[i];
 }
 printf("���ֵΪ��%d\n",max);
}
 return 0;
}   */ 
