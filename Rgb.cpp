// RGB.CPP
#include "Rgb.h"

namespace caveofprogramming{

    Rgb::Rgb(double r, double g, double b):r(r), g(g), b(b){

    }

    Rgb operator-(const Rgb& first, const Rgb& second){
        return Rgb(first.r - second.r, first.g - second.g, first.b - second.b);
    }




}