#ifndef LATCHED_BOOLEAN_HPP
#define LATCHED_BOOLEAN_HPP
class LatchedBoolean{
public:
  bool update(bool newValue){
    bool ret = false;
    if(newValue && !last){
      ret = true;
    }
    last = newValue;
    return ret;
  }

private:
  bool last = false;
};
#endif
