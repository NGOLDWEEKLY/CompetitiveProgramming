#include <bits/stdc++.h>
using namespace std;
int mod(string numb, int a)
{
    int res = 0;

    for (int i = 0; i < numb.length(); i++)
        res = (res * 10 + (int)numb[i] - '0') % a;

    return res;
}
bool isprime(long long int i)
{
    if (i == 2 || i == 3 || i == 5)
    {
        return true;
    }

    string x = to_string(i);
    char y = x[x.length() - 1];
    if (y == '1' || y == '3' || y == '7' || y == '9')
    {
        int time = 0;
        for (long long int j = 2; j <= (long long int)(sqrt(i)); j++)
        {
            if (mod(x, j) == 0)
            {
                time++;
                return false;
            }
        }
        if (time == 0)
            return true;
    }
    return false;
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int x;
    cin >> x;
    for (int z = 0; z < x; z++)
    {
        long long int a, x1, x2;
        double area = 0;
        cin >> a >> x1 >> x2;
        cout << "Case #" << z + 1 << ": ";
        int i = 0;
        while (a > 0)
        {
            area += (a * a);
            if (i % 2 == 0)
            {
                a *= x1;
            }
            else
                a = a / x2;
            i++;
        }
        cout << fixed << setprecision(6) << 3.14159265359 * area << "\n";
    }
    return 0;
}