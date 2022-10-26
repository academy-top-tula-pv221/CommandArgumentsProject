#include <iostream>

double power(double x, int n)
{
    double result{ 1 };
    for (int i = 0; i < n; i++)
        result *= x;
    return result;
}

double PowerBinReq(double x, int n)
{
    if (n == 0)
        return 1;
    if (n & 1)
        return PowerBinReq(x, n - 1) * x;
    else
    {
        double y = PowerBinReq(x, n >> 1);
        return y * y;
    }
}

double PowerBinLoop(double x, int n)
{
    int result{ 1 };
    while (n)
    {
        if (n & 1) // n % 2 == 1
        {
            result *= x;
            n--;
        }
        else
        {
            x *= x; // x = x * x
            n >>= 1; // n = n / 2
        }
    }
    return result;
}
double PowerBinLoopOptima(double x, int n)
{
    double result{ 1 };
    while (n)
    {
        if (n & 1)
            result *= x;
        x *= x;
        n >>= 1;
    }

    /*for (int n = n; n >=0; n / 2)
    {
        if (n & 1)
            result *= x;
        x *= x;
    }*/

    return result;
}




int main(int argc, char* argv[])
{
    

    return 0;
}
