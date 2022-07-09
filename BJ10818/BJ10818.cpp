/*
#include<iostream>

using namespace std;


int main() 
{

	int n;
	cin >> n;

	int num[n + 1];
	int min = 1000000;
	int max = -1000000;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (min > num[i])
		{
			min = num[i];
		}
		if (max < num[i])
		{
			max = num[i];
		}
	}

	cout << min << " " << max << "\n";

	return 0;
}
*/

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
	for (int j = 0; j < N; ++j)
		if (arr[j] < X)
		{
			cout << arr[j] << endl;
		}
}