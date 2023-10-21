#ifndef VEC2D_H
#define VEC2D_H

struct Vec2d
{
  double x{0.};
  double y{0.};

  Vec2d() = default;

  Vec2d(double x_, double y_) : x{x_}, y{y_} {}

  Vec2d& operator+= (const Vec2d& rhs);
  Vec2d& operator-= (const Vec2d& rhs);
  Vec2d& operator*= (double rhs);
};

Vec2d operator+ (const Vec2d& lhs, const Vec2d& rhs);
Vec2d operator- (const Vec2d& lhs, const Vec2d& rhs);
Vec2d operator* (const Vec2d& lhs, double rhs);
Vec2d operator* (double rhs, const Vec2d& lhs);

double dot(const Vec2d& first, const Vec2d& second);
double cross(const Vec2d& first, const Vec2d& second);

double length (const Vec2d& v);

Vec2d Vec2d::rotated (const Vec2d& v, double angle)

#endif  // VEC2D_H
