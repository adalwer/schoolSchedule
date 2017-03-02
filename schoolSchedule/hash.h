#ifndef HASH_H
#define HASH_H
#include <vector>

using namespace std;

class Hash
{
private:
    long long prime;
    long long base;
public:
    Hash(long long base);

    long long createKey (pair <int, int> t);
    pair <int, int> getValue (long long key);

};

#endif // HASH_H
