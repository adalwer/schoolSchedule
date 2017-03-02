#include "hash.h"

using namespace std;

Hash::Hash(long long base) {
    this->base = base;
    this->prime = 1000000007;
}

long long Hash::createKey (pair <int, int> t) {
    return t.first  + t.second * base;
}

pair <int, int> Hash::getValue (long long key) {
    return pair <int, int> (key % base, (key / base) % base);
}
