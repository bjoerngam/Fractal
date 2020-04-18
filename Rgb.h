// RGB.H
#ifndef _RGB_H_
#define _RGB_H_

namespace caveofprogramming{

    struct Rgb{

        double r;
        double g;
        double b;

        Rgb(double r, double g, double b);

    };
    Rgb operator-(const Rgb& first, const Rgb& second);
}

#endif /*RGB_H_*/