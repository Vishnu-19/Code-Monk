#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[10000];int count=0;
	cin>>a;
	for(int i=0;i<strlen(a);i++)
	{
		count=0;	for(int j=i;j<strlen(a);j++)
		{
		if(a[j]=='2'||a[j]=='4'||a[j]=='6'||a[j]=='8')
		{
			count++;
		}
	}
	cout<<count<<" ";
	}
	
	return 0;
}
