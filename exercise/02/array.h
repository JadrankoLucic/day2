// do not use standard container as member or base class
#include <xlocmon>

class array
{
private:
  double* p;
  double v;
  int n;
  //double* arr = new double[n];

public:
  array(int size = 0, double value = 0);
  ~array();
  array(const array& other);
  int size() const;
  double at(int index) const;
  array operator = (array const &other)
  {
    if (this != &other)
    {
      delete[] p;
      //v = other.v;
      //n = other.n;
      //p = other.p;
      //p = new double[n];
      //for (int i = 0; i < n; i++)
      //{
      //  p[i] = v;
      //}
    }
    return *this;
  }
};


//class array
//{
//public:
//  color(double rn = 0, double gn = 0, double bn = 0);
//  ~color();
//  double get_green() const;
//  double get_blue() const;
//  void set_red(double cn);
//  void set_green(double cn);
//  void set_blue(double cn);
//  COLORREF get_color_ref();
//  double get_luminance();
//
//private:
//  double fix_value(double rn);
//  double _rn;
//  double _gn;
//  double _bn;
//};