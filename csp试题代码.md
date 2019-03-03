## 小明上学

**题目描述** 

https://blog.csdn.net/richenyunqi/article/details/83385502

**C++代码** 

~~~c++
#include<iostream>
using namespace std;
int main(){
	int red,yerrow,green,n,a,b,ans=0;
	cin >> red >> yerrow >> green >> n;
	while(n--)
	{
		cin >> a >> b;
		if(a==0 | a==1)
			ans+=b;
		else if(a==2)
			ans+=b+red;
	}
	cout << ans;
	return 0;
} 
~~~

