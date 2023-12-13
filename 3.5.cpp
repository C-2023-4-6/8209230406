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
    cout << "第一天猴子共摘了 " << total << " 个桃子。" << std::endl;
    return 0;
}