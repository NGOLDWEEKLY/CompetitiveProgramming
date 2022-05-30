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
bool steps_to_palindrome(string ss)
{
    int a = ss.length();
    vector<char> str;
    int score = 0;
    for (int i = 0; i < a / 2; i++)
    {
        str.push_back(ss[i]);
    }
    for (int i = a / 2 + a % 2; i < a; i++)
    {
        if (ss[i] != str[str.size() - 1])
            return false;
        str.pop_back();
    }
    return true;
}

int fact(long long int num)
{
    int tot = 0;
    for (long long int i = 1; i * i <= (num); i++)
    {
        if (mod(to_string(num), i) == 0)
        {
            if (num / i != i)
            {
                if (num / i < 10)
                    tot++;
                else if (steps_to_palindrome(to_string(num / i)))
                    tot++;
            }
            if (i < 10)
                tot++;
            else if (steps_to_palindrome(to_string(i)))
                tot++;
        }
    }
    return tot;
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int x;
    cin >> x;
    for (int z = 0; z < x; z++)
    {
        long long int a;
        cin >> a;
        cout << "Case #" << z + 1 << ": ";
        int i = 0;
        cout << fact(a) << "\n";
    }
    return 0;
}