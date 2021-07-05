#ifndef A_H
#define A_H

#include<cstddef>


template <typename T> T sum(T const *xs, size_t n);

template int sum(int const *, size_t );
template double sum(double const *, size_t );

#endif