// Bitmap.cpp

#include <fstream>
#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"


using namespace caveofprograming;
using namespace std;

namespace caveofprogramming {

    // RGB Colors Level
    static const int COLOR_LEVEL = 3;

    Bitmap::Bitmap(int width, int height): m_width(width), m_height(height), m_pPixels(new uint8_t[height*width*COLOR_LEVEL]{}){

    }

    Bitmap::~Bitmap(){

    }

    bool Bitmap::write(string filename){
        BitmapFileHeader fileHeader; 
        BitmapInfoHeader infoHeader;

        fileHeader.filesize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width * m_height * COLOR_LEVEL; 
        fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

        infoHeader.width = m_width;
        infoHeader.height = m_height;

        ofstream file; 
        file.open(filename, ios::out|ios::binary);
        if (!file){
            return false;
        }

        file.write((char *)&fileHeader,sizeof(fileHeader));
        file.write((char *)&infoHeader,sizeof(infoHeader));
        //m_pPixels.get() casts the unique pointer to a normal pointer
        file.write((char *)m_pPixels.get(), m_width * m_height * COLOR_LEVEL);

        file.close();
         if (!file){
            return false;
        }

        return true;
    }

    void Bitmap::setPixel(int x, int y, u_int8_t red, u_int8_t green, u_int8_t blue){
        uint8_t *pPixel = m_pPixels.get();
        pPixel += (y*3)*m_width + (x*3);
        // Reserve order because BMP is a little endian file format
        pPixel[0] = blue;
        pPixel[1] = green;
        pPixel[2] = red;

    }
    
} // namespace caveofprogramming
