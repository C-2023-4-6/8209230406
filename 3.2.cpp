#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)return false;
	if (num == 2)return true;
	if (num > 2)
	{
		int i;
		for (i = 2; i < num - 1; i++)
		{
			if (num % i == 0)return false;
			else return true;

		}


	}


}
int main() 
{
	int j=1;
	int num = 1;
	while (j < 200)
	{
		if (is_prime(num))
		{
			cout << setw(6) << num;
			j++;
		}
		if (j % 10 == 0)
		{
			cout << endl;
		}
		num++;

	}

	return 0;
}