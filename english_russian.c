#include <stdio.h>
int main ()
{
	int a,b,c,d;
	printf("Input the number of people in the travel agency��\n");
	scanf("%d",&a);
	printf("Input how many people can speak English��\n");
	scanf("%d",&b);
	printf("Input how many people can speak Russian��\n");
	scanf("%d",&c);
	printf("Input how many people can't speak both languages��\n");
	scanf("%d",&d);
	if(b+d<a && c+d<a && b+c+d>a){
		printf("People can speak both languages��%d",b+c-a+d);	
	}
	else
	 printf("Input data error, unable to calculate\n");
	return 0;
}
  
//һ���������� 72 �ˣ����л�Ӣ����� 48 �ˣ��������� 36 �ˣ�������������� 8 �ˣ������������
//_______����
//��̣�������������72��
//     �����Ӣ��48��
//     ��������36��
//     ����������������8��
//     ��������������   �� 
//     ������������ݴ����޷�����
