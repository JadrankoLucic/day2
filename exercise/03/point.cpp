#include "point.h"

point::point(int x, int y)
{
  this->X = x;
  this->Y = y;
}

point::~point()
{

}
//bool operator==(const point& lp, const point& rp)
//{
//  return lp.X == rp.X && lp.Y == rp.Y;
//}
bool operator!=(const point& lp, const point& rp)
{
  return lp.X != rp.X || lp.Y != rp.Y;
}
bool operator<(const point& lp, const point& rp)
{
  return lp.X*lp.X + lp.Y*lp.Y < rp.X*rp.X + rp.Y*rp.Y;
}

