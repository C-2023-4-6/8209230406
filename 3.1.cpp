#include<iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    cout << "请输入两个自然数" << endl;
    int a, b;
    cin >> a >> b;
    cout << "最大公约数是：" << gcd(a, b) << endl;
    cout << "最大公倍数是：" << a * b / gcd(a, b) << endl;


}