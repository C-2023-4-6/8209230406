#include<iostream>
using namespace std;
int countPeaches(int day) {
    if (day == 10) {
        return 1; 
    }
    else {
        return (countPeaches(day + 1) + 1) * 2; 
    }
}

int main() {
    int total = countPeaches(1); 
    cout << "��һ����ӹ�ժ�� " << total << " �����ӡ�" << std::endl;
    return 0;
}