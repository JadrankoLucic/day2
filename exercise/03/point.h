class point
{
public:
  point(int x = 0, int y = 0);
  ~point();

//private:
  int X;
  int Y;

  bool operator==(const point& other)
  {
    return X == other.X && Y == other.Y;

  }
};
//bool operator==(const point& lp, const point& rp);
bool operator!=(const point& lp, const point& rp);
bool operator<(const point& lp, const point& rp);