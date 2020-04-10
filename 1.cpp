#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool square(int n) {
    if (n < 0)
        return false;
    int root(round(sqrt(n)));
    return n == root * root;
}

bool cube(int n) {
    int root(round(cbrt(n)));
    return n == root * root * root;
}
int main()
{
	int t,a[1000];
	long int count;
	cin>>t;
	while(t!=0)
	{
		count=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if((square(a[i]+a[j]))||(cube(a[i]+a[j])))
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	t--;}
	
	return 0;
}
