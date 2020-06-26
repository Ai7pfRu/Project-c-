/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  // creating class for HSLAPixel
class HSLAPixel {
  
  public:
  
    double h; // storing the hue of the pixel
    double s; // storing the staturation 
    double l;  // storing the lunminance 
    double a; // storing the alpha channel
    
};


}
