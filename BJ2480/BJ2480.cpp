#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	if (A == B && B == C && A == C)
		cout << 10000 + A * 1000;

	else if (A == B)
		cout << 1000 + A * 100;

	else if (A == C)
		cout << 1000 + C * 100;

	else if (B == C)
		cout << 1000 + B * 100;

	else if (A < B  && B < C)
		cout << C * 100;

	else if (A < C && C < B)
		cout << B * 100;

	else if (B < A && A < C)
		cout << C * 100;

	else if (B < C && C < A)
		cout << A * 100;

	else if (C < A && A < B)
		cout << B * 100;
	
	else if (C < B && B < A)
		cout << A * 100;

}