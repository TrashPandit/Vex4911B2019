#include "ui/uihelper.hpp"
#include "odometry.hpp"
#include "sidebar.hpp"
#include "pidtuner.hpp"
void UIHelper::initialize(){
  Odometry::initialize();
  Sidebar::initialize();
  PIDTuner::initialize();
  PIDTuner::hide();
  Odometry::hide();
  //hide other menus
}

void UIHelper::updateDisplay(int l, int r){
  Odometry::update(l, r, 0, 0, 0, 0);
  Sidebar::update();
}
