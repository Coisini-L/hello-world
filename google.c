//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值

#include <stdio.h>
//声明定义函数cal 
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

//使用函数 
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
