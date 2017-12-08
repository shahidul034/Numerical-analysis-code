#include <bits/stdc++.h>


using namespace std;

double x0,x1,x2,sc;
double a,b,c;

double func(double x)
{
    double y=a*pow(x,2)+b*x+c;
    return y;
}

double mx()
{
    double x=sqrt(pow((b/a),2)-2*(c/a));
    return x;
}
void root(double x1,double x2)
{
    int cnt=0;
    double f1=func(x1);
    double f2=func(x2);
    double error=1000;
    double save=x2;
    while(error>=sc)
    {
        cnt++;
        x0=x1- func(x1)*((x2-x1)/(func(x2)-func(x1)));
        double f0 = func(x0);
        if(f0==0)
            break;
        else if(f1*f0<0)
        {
            x2=x0;
            f2=f0;
        }
        else if(f2*f0<0)
        {
            x1=x0;
            f1=f0;
        }
        error=fabs((x0-save)/x0);
        save=x0;
    }
    cout<<"Root is: "<<x0<<endl;
    cout<<"Iteration: "<<cnt<<" times"<<endl;
}
int main()
{

    cout<<"Enter the coefficient a,b,c: "<<endl;
    cin >> a >> b >> c;
    double x = mx();
    cout<<"The range is from "<<-fabs(x)<<" to "<<fabs(x)<<endl;
    cout<<"Enter stopping criteria: " << endl;
    cin>>sc;
    for(double i=-fabs(x);i<fabs(x);i++)
    {
        if(func(i)*func(i+1)<0)
        {
            x1=i;
            x2=i+1;
            root(x1,x2);
        }
    }
    return 0;
}

