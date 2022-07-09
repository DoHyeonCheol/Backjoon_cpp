#include<iostream>

using namespace std;

int main()
{
	int N, X;

	cin >> N >> X;

	int arr[10000];

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}
	for (int j=0; j<N; ++j)
		if (arr[j] < X)
		{
			cout << arr[j] << endl;
		}
}