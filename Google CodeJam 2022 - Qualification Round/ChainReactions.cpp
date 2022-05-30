#include <bits/stdc++.h>
using namespace std;

struct Node
{
    long long int item = 0;
    vector<Node *> next;
};

long long int TT(Node *ptr)
{
    if (ptr->next.size() == 0)
        return ptr->item;

    long long int sum = 0;
    long long int itemmin = LONG_LONG_MAX;
    Node *maxptr = NULL;
    for (int i = 0; i < (ptr->next).size(); i++)
    {
        sum += TT(ptr->next[i]);
        itemmin = min(itemmin, ptr->next[i]->item);
    }
    if (ptr->item < itemmin)
        ptr->item = itemmin;
    if (ptr->next.size() == 1)
    {
        itemmin = ptr->next[0]->item;
        ptr->item = max(ptr->next[0]->item, ptr->item);
        return sum - itemmin + ptr->item;
    }
    else
        return sum - itemmin + ptr->item;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int x;
    cin >> x;
    for (int z = 0; z < x; z++)
    {
        int nodeam;
        cin >> nodeam;
        cout << "Case #" << z + 1 << ": ";
        vector<Node> arrtmp(nodeam);
        Node header;
        header.item = 0;
        Node *head = &header;
        for (int i = 0; i < nodeam; i++)
        {
            cin >> arrtmp[i].item;
        }
        for (int i = 0; i < nodeam; i++)
        {
            int lv;
            cin >> lv;
            lv--;
            if (lv == -1)
                header.next.push_back(&(arrtmp[i]));
            else
                arrtmp[lv].next.push_back(&(arrtmp[i]));
        }
        Node *ptr = head;
        cout << TT(ptr) << "\n";
    }
    return 0;
}