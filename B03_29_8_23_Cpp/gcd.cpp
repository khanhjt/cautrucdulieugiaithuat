//Tichpx
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	while(b)
	{
		int r=a%b;
		a=b;
		b=r;
	}
	cout<<abs(a);
	//__gcd co san trong thu vien STL  algorithm
}


