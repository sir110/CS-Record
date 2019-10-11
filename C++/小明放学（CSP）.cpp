#include <iostream>
using namespace std;
int main()
{
	int light[4], count, ans = 0;
	cin >> light[1] >> light[2] >> light[3] >> count;
	int a, b, sum = light[1] + light[2] + light[3];
	while(count--)
	{
		cin >> a >> b;
		if(a == 0) // µÀÂ· 
			ans += b;
		else // ºì»ÆÂÌÂ·µÆ 
		{
			b = (light[a] - b + ans) % sum;
			if(b > light[a])
			{
				b -= light[a];
				a = (a + 1) % 4;
				if(a == 0) a = 1;
			}
			if(a == 1)
				ans += light[a] - b + light[2];
			else if(a == 2)
				ans += light[a] - b;
		}
	}
	cout << ans;
} 
