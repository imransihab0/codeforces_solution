// https://codeforces.com/contest/1/problem/A
// @handle: imransihab0

#include <stdio.h>
int main()
{

    long long int x, y, z, a, b;
    scanf("%lld%lld%lld", &x, &y, &z);

    if (x % z == 0)
    {
        a = x / z;
    }
    else
    {
        a = (x / z) + 1;
    }

    if (y % z == 0)
    {
        b = y / z;
    }
    else
    {
        b = (y / z) + 1;
    }

    printf("%lld\n", a * b);

    return 0;
}