#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    double x;
    int n;
    cin>>n;
    cin>>x;
    double X[100],f[100];
    for(int i=0;i<n;i++){
        cin>>X[i];
    }
        for(int i=0;i<n;i++){
        cin>>f[i];
    }
    vector<double>cnt2;
    vector<double >temp;
    vector<double>a;
    cnt2.push_back(f[0]);
    int cnt=1;
    for(int i=0;i<n;i++){
            a.push_back(f[i]);
    }
    while(a.size()!=1){
        for(int i=0;i<a.size()-1;i++){
            double ans=(double)(a[i+1]-a[i])/cnt;
            temp.push_back(ans);
        }
        cnt++;
        a.clear();
        for(int i=0;i<temp.size();i++){
            a.push_back(temp[i]);
        }
        temp.clear();
        cnt2.push_back(a[0]);
    }
    //for(int i=0;i<cnt2.size();i++){
    //}

    double ans2=0;
    for(int i=0;i<n;i++){
            double cnt3=1;
        for(int j=0;j<=i-1;j++){
            cnt3*=(x-X[j]);
        }
        ans2+=(cnt3*cnt2[i]);
    }
    cout<<ans2<<endl;
}


