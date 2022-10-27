#include <bits/stdc++.h>
using namespace std;

struct myHash
{
    int *arr;
    int cap, size;
    myHash(int c)
    {
        cap = c;
        size = 0;
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1;
        }
    }
    int hash(int key)
    {
        return key % cap;
    }
    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
                return true;
            i = (i + 1) % cap; // looping in circular
            if (i == h)
                return false; // circular loop complete
        }
        return false;
    }
    bool insert(int key)
    {
        if (size == cap)
            return false; // hashtable is full
        int i = hash(key);
        //-2 represents deleted slot
        while (arr[i] != -1 && arr[i] != -2 && arr[i] != key)
            i = (i + 1) % cap;
        if (arr[i] == key) // same value not allowed
            return false;
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }
    bool erase(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
                return false; // circular loop complete
        }
    }
};
int main()
{
}