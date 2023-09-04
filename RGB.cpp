#include "RGB.h"

#include <iostream>

#define BOUND(x, min, max) ((x) < (min) ? (min) : ((x) > (max) ? (max) : (x)))

RGB::RGB(int red, int green, int blue) :
    red_(BOUND(red, 0, 255)),
    green_(BOUND(green, 0, 255)),
    blue_(BOUND(blue, 0, 255)) { }

RGB::~RGB() { }

void RGB::print() {
  std::cout << "RGB(" << red_ << ", " << green_ << ", " << blue_ << ")"
    << std::endl;
}

RBG RGB::mix(const RGB& c) {
  return RGB((red_+c.red_)/2, (green_+c.green_)/2, (blue_+c.blue_)/2);
}

RBG RGB::operator+(const RGB& c) {
  return RGB((red_+c.red_)/2, (green_+c.green_)/2, (blue_+c.blue_)/2);
}

RBG RGB::brighten(const RGB& c) {
  return RGB((red_+c.red_)/2, (green_+c.green_)/2, (blue_+c.blue_)/2);
}