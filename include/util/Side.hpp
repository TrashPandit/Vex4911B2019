#ifndef SIDE_HPP
#define SIDE_HPP
#include "main.h"
class Side{
public:
  pros::Motor * front;
  pros::Motor * back;
  bool flipped;
  Side(pros::Motor * front_, pros::Motor * back_,bool flipped_);
  void move_relative(double ticks, int speed);
  static const int ticksPerInch;
};
#endif
