//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ

#include <stdio.h>
//�������庯��cal 
int cal(int n){
    int count=0,temp=1,high=0,low,least=0;
    while(n/temp!=0) {                              
        low = n % temp;                    
        high = n / (temp * 10);            
        least = (n / temp) % 10;            
        if (least == 0) {
            count += high * temp;                      
        } else if (least == 1) {
            count += high * temp + low + 1;            
        } else {
            count += (high + 1) * temp;     
        }
        temp *= 10;
    }
    return count;
}

//ʹ�ú��� 
int main(){
    int i,res;
    i=2;
    while(1){
        res=cal(i);
        if (res==i){
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}
