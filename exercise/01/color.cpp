#include "stdafx.h"
#include "color.h"
#include <windows.h> // RGB

color::color(double rn, double gn, double bn  )
{
  this->_rn = fix_value(rn);
  this->_gn = fix_value(gn);
  this->_bn = fix_value(bn);
}

color::~color()
{

}

double color::fix_value(double cn)
{
  if (cn < 0)
    return 0.;
  if (cn > 1.)
    return 1.;
  return cn;
}

double color::get_red() const
{
  return this->_rn;
}
double color::get_blue()const
{
  return this->_bn;
}

double color::get_green()const
{
  return this->_gn;
}

void color::set_red(double cn)
{
  this->_rn = fix_value(cn);
}

void color::set_green(double cn)
{
  this->_gn = fix_value(cn);
}

void color::set_blue(double cn)
{
  this->_bn = fix_value(cn);
}

COLORREF color::get_color_ref()
{
  COLORREF r = RGB(_rn * 255, _gn * 255, _bn * 255);
  return r;

}

double color::get_luminance()
{
  return 0.2126*_rn + 0.7152*_gn + 0.0722*_bn;
}

bool operator==(const color& lhs, const color& rhs)
{
  return true;//kod koji usporeduje svaku boju
}
