#include <iostream>
using namespace std;
int main()
{
	int r, g, y, n; // red, green, yerrow
	cin >> r >> y >> g >> n;
	int a, b, sum = 0;
	while(n--)
	{
		cin >> a >> b;
		if(a==0 || a==1)
			sum += b;
		else if(a==2)
			sum = sum + b + r;
	}
	cout << sum;
	return 0;
} 
