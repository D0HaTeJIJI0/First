#include <iostream>
#include <math.h>
using namespace std;

inline float sinus(float,float);

int main()
{
	cout << "Enter x:\t";
	float x;
	cin >> x;
	cout << "\nEnter accurace epselon:\t";
	float epselon;
	cin >> epselon;
	cout << "\nSin(x):\t" << sinus(x,epselon);
	return 0;
}

inline float sinus(float x,float epselon)
{
	float answer = 0,member = x;
	int n = 1;
	cout << endl;
	while (fabs(member) > epselon)
	{
		if (n%4 == 1) answer += member;
		else answer -= member;
		cout << answer << endl;
		member *= (x*x)/(++n)/(++n);
	}
	return answer;
}
