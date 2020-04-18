// Main Application

#include <iostream>
#include "FractalCreator.h"

using namespace caveofprogramming;

int main(){

    FractalCreator fractalCreator(800,600);

    fractalCreator.addRange(0.0, Rgb(0, 0, 255));
	fractalCreator.addRange(0.05, Rgb(255, 99, 71));
	fractalCreator.addRange(0.08, Rgb(255, 215, 0));
	fractalCreator.addRange(1.0, Rgb(255, 255, 255));

    fractalCreator.addZoom(Zoom(295,202,0.1));
    fractalCreator.addZoom(Zoom(312,304,0.1));
    fractalCreator.run("Fractal.bmp");

    std::cout << "Finished." << std::endl;

    return 0;
}