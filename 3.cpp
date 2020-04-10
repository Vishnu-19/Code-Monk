#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n;
	cin>>k;
	int *a=new int(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int max=*max_element (a,a+n);
	    int min=*min_element (a,a+n);
	cout<<max-min;
	return 0;
}
