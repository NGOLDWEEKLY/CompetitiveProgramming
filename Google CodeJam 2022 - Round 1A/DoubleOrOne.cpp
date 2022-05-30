#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int item = 0;
    vector<Node *> next;
};

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int x;
    cin >> x;
    for (int z = 0; z < x; z++)
    {
        cout << "Case #" << z + 1 << ": ";
        string hehe, heheres = "";
        cin >> hehe;
        for (int i = 0; i < hehe.length() - 1; i++)
        {
            if (hehe[i] < hehe[i + 1])
            {

                heheres.push_back(hehe[i]);
                heheres.push_back(hehe[i]);
            }
            else if (hehe[i] == hehe[i + 1])
            {
                string rep = "";
                rep.push_back(hehe[i]);
                int j;
                for (j = i; j < hehe.length() - 1; j++)
                {
                    if (hehe[j] == hehe[j + 1])
                        rep.push_back(hehe[i]);
                    else
                    {
                        if (hehe[j] < hehe[j + 1])
                        {

                            heheres.push_back(hehe[i]);
                            heheres.push_back(hehe[i]);
                        }
                        break;
                    }
                }
                heheres += rep;
                i = j;
            }
            else
                heheres += hehe[i];
        }
        heheres += hehe[hehe.length() - 1];
        cout << heheres << "\n";
    }
    return 0;
}