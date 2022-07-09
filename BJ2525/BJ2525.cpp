#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (0 <= A <= 23 && B + C < 60)
	{
		cout << A;
		cout << " ";
		cout << B + C;
	}

	else if (A + ((B + C) / 60) <= 23 && B + C >= 60)
	{
		cout << (A + ((B + C) / 60));
		cout << " ";
		cout << ((B + C) % 60);
	}

	else if (A + ((B + C) / 60) >= 24 && B + C >= 60)
	{
		cout << ((A + ((B + C) / 60)) - 24);
		cout << " ";
		cout << ((B + C) % 60);
	}
}