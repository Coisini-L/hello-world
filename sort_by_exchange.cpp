#include <stdio.h>
int main() {
  int  i,j,n,m;
  printf("Enter the number of sorts��\n");
  scanf("%d",&m);
  int x[m];
  while(1) {
  	for (n=0;n<m;n++)
    scanf("%d", &x[n]);
    for(j=m-1;j>0;j--){
		for(i=0;i<j;i++) {
      		if( x[i] > x[i+1]) {
  	    int temp = x[i];
  	    x[i] = x[i+1];
  	    x[i+1] = temp;
      }
   }
}
  	for (n=0;n<m;n++)
    printf(" %d", x[n]);
  }
  return 0;
}
//��������
