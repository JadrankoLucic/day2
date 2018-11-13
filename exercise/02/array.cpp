#include "array.h"
#include <stdexcept>

//dafault-ne vrijdnosti ne idu u implementaciju konstruktora
array::array(int size, double value)
{
  n = size;
  v = value;
  p = new double[n];
  for (int i = 0; i < n; i++)
  {
    p[i] = v;
  }
}

array::~array()
{
  if (p != nullptr)
  {
    delete[] p;
    p = nullptr;
  }
}

array::array(const array& other)
{
  n = other.n;
  v = other.v;
  p = new double[n];
  for (int i = 0; i < n; i++)
  {
    p[i] = v;
  }

}

int array::size() const
{
  return n;;
}

double array::at(int index) const
{
  if (index > n -1 || index < 0)
  {
    throw std::out_of_range("index is out of range");
  }
  return p[index];
}
