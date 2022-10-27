#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table; // dynamic allocation(array of list)
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }
    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    bool search(int key)
    {
        int i = key % BUCKET;
        for (auto x : table[i])
        {
            if (x == key)
                return true;
        }
        return false;
    }
    void remove(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }
    void print(int key)
    {
        int i = key % BUCKET;
        cout << i;
    }
};

int main()
{
    MyHash b = 5;
    b.insert(25);
    b.insert(9);

    b.print(25);
    b.print(9);
    b.insert(1);
    b.print(1);
}