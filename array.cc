#include "array.h"

array::array(double const *e, size_t n)
        :elements(new double[n]), num_elements(n) {
    for (size_t i = 0; i < n; i++)
        elements[i] = e[i];
}
array::array(array const &other)        //copy constructure
        : elements(new double[other.num_elements]),
          num_elements(other.num_elements) {
    for (size_t i = 0; i < num_elements; i++)
        elements[i] = other.elements[i];
}
array::~array() {       //destructure
    delete [] elements;
}
array &array::operator=(array const &other) {       //assignment operator
    delete [] elements;
    elements = new double[other.num_elements];
    num_elements = other.num_elements;
    for (size_t i = 0; i < num_elements; i++)
        elements[i] = other.elements[i];
    return *this;
}
double array::mean() const {
    double total = 0;   
    for (size_t i = 0; i < num_elements; i++)
        total += elements[i];
    return total / num_elements;
}

using namespace std;

ostream &operator<<(ostream &out, array const &a) {
    cout << "{";
    for (size_t i = 0; i < a.num_elements; i++) {
        out << " " << a.elements[i];
        if (i < a.num_elements - 1)
            out << ",";
    }
    return out << " }";
}