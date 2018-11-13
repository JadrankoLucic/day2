#pragma once
#include <windows.h> // RGB

class color
{
public:
  color(double rn = 0, double gn = 0, double bn = 0);
  ~color();
  double get_red() const;
  double get_green() const;
  double get_blue() const;
  void set_red(double cn);
  void set_green(double cn);
  void set_blue(double cn);
  COLORREF get_color_ref();
  double get_luminance();

private:
  double fix_value(double rn);
  double _rn;
  double _gn;
  double _bn;
};

bool operator==(const color& lhs, const color& rhs);