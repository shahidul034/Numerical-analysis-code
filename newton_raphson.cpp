#include <bits/stdc++.h>

using namespace std;

double x,x1,sc,in;
double a,b,c;

double fn(double x)
{
    double y=a*pow(x,2)+b*x+c;
    return y;
}

double derrivative(double x)
{
    double y=2*a*x+b;
    return y;
}


double mx()
{
    double x=sqrt(pow((b/a),2)-2*(c/a));
    return x;
}
double root(double x)
{
    double error=1000;
    double save=x;
    int cnt=0;
    while(error>=sc)
    {
        cnt++;
        x1=x-(fn(x)/derrivative(x));
        x=x1;
        error=fabs((x1-save)/x1);
        save=x1;
    }
    cout<<"The root is: "<<x1<<endl;
    cout<<"Iteration: "<<cnt<<" times"<<endl;
}
int main()
{
    cout<<"Enter the coefficient a,b,c: "<<endl;
    cin>>a>>b>>c;

    double x=mx();
    cout<<"Lowest range "<<-fabs(x)<<" and Highest range "<<fabs(x)<<endl;
    cout<<"Enter stopping criteria: "<<endl;
    cin>>sc;

    root(-fabs(x));
    root(fabs(x));

    return 0;
}
