#include <iostream>
#include <cmath>
using namespace std;

float sumSqrt(int N)
{
    float sum=0;
    int i=1;

    if(N>0)
    {
        while(i<=N)
        {
        sum=sum+(1/sqrt(i));
        i++;
        }
    }
    
    return sum;
    
}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double j = sumSqrt(3);    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << j;

}
