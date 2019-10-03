#include "UI/tracker.hpp"
#include "pros/apix.h"


lv_obj_t * tracker::container = lv_cont_create(lv_scr_act(), NULL);
lv_obj_t * tracker::left_label = lv_label_create(tracker::container, NULL);
lv_obj_t * tracker::right_label = lv_label_create(tracker::container, NULL);
lv_obj_t * tracker::reset_label = lv_label_create(tracker::container, NULL);
lv_obj_t * tracker::reset_button = lv_btn_create(tracker::container, NULL);
int tracker::leftenc = 0;
int tracker::rightenc = 0;
void tracker::initialize(){
  lv_label_set_text(reset_label, "RESET");
  lv_obj_set_pos(left_label, 10, 30);
  lv_obj_set_pos(right_label, 10, 100);
  lv_obj_set_pos(reset_label, 395, 110);
  lv_obj_set_size(container, 480, 240);
  lv_obj_set_pos(reset_button, 380, 80);
  lv_obj_set_size(reset_button, 80, 80);
}
void tracker::my_event_cb(lv_obj_t * obj, lv_event_t event){

}
// void tracker::update(int left, int right){
//   lv_btn_state_t state = lv_btn_get_state(tracker::reset_button);
//   lv_label_set_text(left_label, &std::to_string(left - leftenc)[0]);
//   lv_label_set_text(right_label, &std::to_string(right - rightenc)[0]);
void resetValues(){
      lv_label_set_text(tracker::reset_label, "PRESSED");
      lv_btn_set_state(tracker::reset_button, LV_BTN_STATE_REL);
      // leftenc = left;
      // rightenc = right;
  }
}
