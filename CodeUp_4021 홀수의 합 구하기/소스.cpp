#include <iostream>
#define N 7
using namespace std;

int main()
{
	int sum = 0, input;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		if (input % 2)
			sum += input;
	}
	if (sum)
		cout << sum;
	else
		cout << -1;
	return 0;
}