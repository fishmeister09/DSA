#include <bits/stdc++.h>
using namespace std;
// cache friendly

// if 100keys are to be inserted atleast, 100 size hashtable is required

// ways to implement open addressing

// LINEAR PROBING:-
//(clustering problem)(primary clusters problem)

// h(key)=key%7
// hash(key,i)=(h(key)+i)%7

// QUADRATIC PROBING:-
//(secondary clusters problem)(also may not find an empty slot even if there exists one)
//(will find empty slots if alpha < 0.5 and m is a prime)

// hash(key,i)=(h(key)+i^2)%m

// DOUBLE HASHING:-
//(no clustering)
// hash(key,i)=(h1(key)+i*h2(key))%m
// h1(key)=key%7
// h2(key)=6-(key%6)
// h2 is used when collision happens-(never returns 0)

// double hashing algo:-

// void doubleHashingInsert(key)
// {
//     if (table is full)
//         return error;
//     probe = h1(key), offset = h2(key);
//     while (table[probe] is occupied)
//     {
//         probe = (probe + offset) % m;
//     }
//     table[probe] = key;
// }
