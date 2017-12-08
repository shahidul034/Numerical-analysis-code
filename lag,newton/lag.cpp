#include<iostream>
#include<stdio.h>
#include<string.h>
#define inf 0xfffffff
typedef long long int ll;
using namespace std;
int main()
{
    double X[100];
    double Y[100];
    double L[100];
    memset(L,1,sizeof (L));
    int n;cin>>n;
    double x;cin>>x;
    for(int i=0;i<n;i++){
		cin>>X[i];

    }
    for(int i=0;i<n;i++){
		cin>>Y[i];
    }
    double ans=1;
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){continue;}
			else {
				ans=ans*((x-X[j])/(X[i]-X[j]));
			}
		}
		L[i]=ans;
		ans=1;
    }
    double ans2=0;
   for(int i=0;i<n;i++){
	ans2+=(Y[i]*L[i]);
   }
   cout<<ans2<<endl;
}
