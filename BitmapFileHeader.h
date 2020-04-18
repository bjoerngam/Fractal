// BitmapFileHeader.h

#ifndef _BITMAPFILEHEADER_H_
#define _BITMAPFILEHEADER_H_

//Making sure that we are declaring exactly int32 so we are including cstdint
#include <cstdint>

using namespace std;

namespace caveofprogramming {

    #pragma pack(push, 2)

    struct BitmapFileHeader{
        //Marker for the file to make sure that is an Bitmap
        char header[2]{'B','M'};

        int32_t filesize;
        int32_t reservered{0};
        int32_t dataOffset;
        };
    #pragma pack(pop)

}

#endif /*_BITMAPFILEHEADER_H_*/