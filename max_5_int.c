#include <stdio.h>
int main ()
{
	int x[5],i,j;
	printf("Input five numbers:");
	scanf("%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	for(j=4;j>0;j--){
		for(i=0;i<j;i++) {
      		if( x[i] < x[i+1]) {
  	    int temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }
}
}
printf("%d%d%d%d%d",x[0],x[1],x[2],x[3],x[4]);
return 0;
}
//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ
//���������λ����_______��
//��̣���������5�����֣����������Ϊ����5λ�������
