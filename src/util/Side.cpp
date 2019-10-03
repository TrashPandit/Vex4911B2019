#include "util/Side.hpp"
#include "cmath"


Side::Side(pros::Motor * front_, pros::Motor * back_, bool flipped_){
  front = front_;
  back = back_;
  flipped = flipped_;
}

void Side::move_relative(double inches, int speed){
  if(flipped){
    front->move_relative(-inches * ticksPerInch,speed);
    back->move_relative(-inches * ticksPerInch,speed);
  }
  else{
    front->move_relative(inches * ticksPerInch,speed);
    back->move_relative(inches * ticksPerInch,speed);
  }
}
const int Side::ticksPerInch = 900/(M_PI*4);
