#include <iostream>

using namespace std;

int main()
{
	int score;
	cin >> score;
	char grade;

	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score < 90 && score >=80)
	{
		grade = 'B';
	}
	else if (score < 80 && score >= 70)
	{
		grade = 'C';
	}
	else if (score < 70 && score >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	cout << grade << endl;
}