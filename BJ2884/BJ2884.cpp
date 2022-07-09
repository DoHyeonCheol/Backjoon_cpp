#include <iostream>

using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	if (M >= 45)
	{
		cout << H << endl;
		cout << M - 45 << endl;
	}
	else if (H >=1 && M < 45)
	{
		cout << H - 1 << endl;
		cout << M + 60 - 45 << endl;
	}
	else if(H == 0 && M <45)
	{
		cout << H + 24 -1 << endl;
		cout << M + 60 - 45 << endl;
	}

}