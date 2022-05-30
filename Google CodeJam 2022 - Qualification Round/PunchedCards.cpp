#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int x;
    cin >> x;
    for (int z = 0; z < x; z++)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << z + 1 << ":\n";
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (i == 0 && j == 0)
                    cout << "..";
                else
                    cout << "+-";
            }
            cout << "+\n";
            for (int j = 0; j < b; j++)
            {
                if (i == 0 && j == 0)
                    cout << "..";
                else
                    cout << "|.";
            }
            cout << "|\n";
        }
        for (int j = 0; j < b; j++)
        {
            cout << "+-";
        }
        cout << "+\n";
    }
}