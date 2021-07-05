#include "a.h"


template <typenaame T>
T sum(T const *xs, size_t n) {
    T s = 0;
    for (size_t i = 0; i < n; i++)
        s += xs[i];
    return s;
}

template <int> int sum(int const *, size_t);