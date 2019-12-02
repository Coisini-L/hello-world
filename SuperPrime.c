#include <stdio.h>

int PJ(int x[],int j);

int main (){
	int x[10000];
	int i,j=0;
	for (i=100;i<=10000;i++){
		int s,t=0;
		for (s=2;s<i;s++){
			if (i%s==0) t++;
		}
		if (t==0){
			int n1,n2,n3,n4;
			n1=i/1000;
			n2=(i/100)-10*n1;
			n3=(i/10)-100*n1-10*n2;
			n4=i-1000*n1-100*n2-10*n3;
			int sum=n1+n2+n3+n4;
			int n=0;
			for (s=1;s<=sum;s++){
				if (sum%s==0) n++;
			}
			if (n==2){
				int sum2=n1*n1+n2*n2+n3*n3+n4*n4;
				int m=0;
				for (s=1;s<=sum2;s++){
					if (sum2%s==0) m++;
				}
				if (m==2){
					x[j]=i;
					j++;
				}
			}
			else continue;
		}
		else continue;
	}
	for (i=0;i<j;i++){
		printf("%d\n",x[i]);
	}
	float pj=PJ(x,j);
	printf ("%f",pj);
	return 0;
}

int PJ(int x[],int j){
	int i;
	int sum=0;
	for (i=0;i<j;i++){
		sum+=x[i];
	}
	float pj;
    pj=sum/j;
	return pj;
}

//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
