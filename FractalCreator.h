// FractalCreator.h

#ifndef _FRACTALCREATOR_H_
#define _FRACTALCREATOR_H_ 

#include <string>
#include <memory>
#include <cstdint>
#include <vector>
#include <assert.h>

#include "mandelbrot.h" 
#include "Rgb.h"
#include "zoom.h"
#include "ZoomList.h"
#include "Bitmap.h"


namespace caveofprogramming{

    class FractalCreator
    {
    private:
        int m_width{0};
        int m_height{0};
        int m_total{0};
        unique_ptr<int[]> m_pHistogram;
        unique_ptr<int[]> m_pFractal;
        Bitmap m_bitmap;
        ZoomList m_zoomList; 
        vector <int> m_ranges;
        vector <Rgb> m_colors;
        vector <int> m_rangesTotal;
        bool m_gotFirstRange{false};

        void calculateIteration();
        void drawFractal();
        void calculateTotalIterations();
        void writeBitmap(std::string filename);
        int getRange(int iterations) const; 
        
    public:
        FractalCreator(int width, int height);
        virtual ~FractalCreator();
        void addZoom(const Zoom& zomm);
        void calculateRangeTotals();
        void addRange(double rangeEnd, const Rgb& rgb);
        void run(std::string filename);
    };

}


#endif /*_FRACTALCREATOR_H_ */