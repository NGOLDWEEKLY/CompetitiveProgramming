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
        int count = 0;
        vector<int> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr.at(i);
        }
        sort(arr.begin(), arr.end());
        cout << "Case #" << z + 1 << ": ";
        for (int i = 0; i < a; i++)
        {
            count++;
            if (count <= arr[0])
            {
                arr.erase(arr.begin());
            }
            else
            {
                bool chance = false;
                for (int j = i + 1; j < a; j++)
                {

                    if (count <= arr[j - count + 1])
                    {

                        arr.erase(arr.begin() + j - count + 1);
                        chance = true;
                        break;
                    }
                }
                if (!chance)
                {
                    count--;
                    break;
                }
            }
        }
        cout << count << "\n";
    }
}