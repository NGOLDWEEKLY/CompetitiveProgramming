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
        int a;
        cin >> a;
        cout << "Case #" << z + 1 << ":\n";
        vector<int> arr(4, 0);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int aaa;
                cin >> aaa;
                arr[j] = min(arr[j], aaa);
            }
        }
        int su = arr[0] + arr[1] + arr[2] + arr[3];
        if (su == 1000000)
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i] << (i == 3 ? " " : "");
            }
        }
        else if (su < 1000000)
        {
            cout << "IMPOSSIBLE";
        }
        else
        {
            int tmp = 1000000;
            for (int i = 0; i < 4; i++)
            {
                if (arr[i] >= tmp)
                {
                    if (tmp >= 0)
                        cout << tmp << " ";
                    else
                        cout << 0 << " ";
                    tmp = 0;
                }
                else
                {
                    cout << arr[i] << (i == 3 ? " " : "");
                    tmp -= arr[i];
                }
            }
        }

        cout << "\n";
    }
}