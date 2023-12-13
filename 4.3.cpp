#include<iostream>
using namespace std;
int main()
{
	bool lock[100];
	for (int i = 0; i < 100; i++) {
		lock[i] = 0;
	}
	for (int j = 1; j < 101; j++) {
		for (int k = j; k < 101; k=k+j) {
			lock[k-1] = !lock[k-1];
		}
	}
	for (int t = 0; t < 100; t++) {
		if (lock[t])cout << t + 1 << " ";

	}

}