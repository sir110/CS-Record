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

## 小明放学

**题目描述** 

https://blog.csdn.net/richenyunqi/article/details/86437886

值得为作者点赞！

**C++代码** 

~~~c++
#include<iostream>
using namespace std;
int main(){
    long long light[3],N,a,b,ans=0;
    scanf("%lld%lld%lld%lld",&light[0],&light[2],&light[1],&N);
    long long sum=light[0]+light[1]+light[2];//sum为红绿灯变换一周的总时长
    while(N--){
    	  scanf("%lld%lld",&a,&b);
        if(a==0)//是道路
            ans+=b;//时长直接递增
        else{//是红绿灯
            if(a==1)//将红绿灯标号变为light数组的下标
                a=0;
            else if(a==3)
                a=1;
            b=(light[a]-b+ans)%sum;//该红绿灯变换的最后一周的时长
            while(b>light[a]){//若b比当前红绿灯时长长
                b-=light[a];//减去当前的红绿灯时长
                a=(a+1)%3;//转向下一个红绿灯
            }
            if(a==0)//是红灯
                ans+=light[a]-b;//加上红灯剩余时长
            else if(a==2)//是黄灯
                ans+=light[a]-b+light[0];//加上黄灯剩余时长以及一个红灯时长
        }
    }
    printf("%lld",ans);
    return 0;
}

~~~

