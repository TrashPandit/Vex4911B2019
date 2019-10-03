#ifndef TRACKER_HPP
#define TRACKER_HPP
#include "pros/apix.h"
class tracker{
public:
  static lv_obj_t * container;
  static void initialize();
  static void update(int left, int right);
  static lv_obj_t * left_label;
  static lv_obj_t * right_label;
  static lv_obj_t * reset_button;
  static lv_obj_t * reset_label;
  static int leftenc; 
  static int rightenc;
private:

};
#endif
