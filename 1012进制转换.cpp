//1012������ת��
#include <iostream>
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1��10����������
        Number no3 = no1.converto(n2);  //no3��n2���Ƶ�������
        no3.show();     //������
    }
}
