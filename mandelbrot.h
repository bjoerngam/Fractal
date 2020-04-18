// Manelbrot.h

#ifndef _MANDELBROT_H_ 
#define _MANDELBROT_H_

namespace caveofprogramming{


    class Mandelbrot
    {
    private:
        
    public:
        static const int MAX_ITERATIONS = 1000; 
        Mandelbrot();
        ~Mandelbrot();


        static int getIterations(double x, double y);
    };

}


#endif  /* _MANDELBROT_H_ */