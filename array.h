#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>


class array {
    double *elements;
    size_t num_elements;
public:
    array(double const *e = nullptr, size_t n =0);
    array(array const &); //copy constructure
    ~array();  //destructure
    array &operator=(array const &); //assignment operator
    double mean() const;
    friend std::ostream &operator<<(std::ostream &, array const &);
};

#endif