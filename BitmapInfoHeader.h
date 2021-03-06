// BitmapInfoHeader

#ifndef _BITMAPINFOHEADER_H_
#define _BITMAPINFOHEADER_H_

//Making sure that we are declaring exactly int32 so we are including cstdint
#include <cstdint>

using namespace std;

namespace caveofprograming {

        #pragma pack(push, 2)

        struct BitmapInfoHeader{
            int32_t headerSize{40};
            int32_t width;
            int32_t height;
            int16_t planes{1};
            int16_t bitsPerPixsel{24};
            int32_t compression{0};
            int32_t dataSize{0};
            int32_t horizontalResolution{2400};
            int32_t verticalResolution{2400};
            int32_t colors{0};
            int32_t importantColors{0};
        };

        #pragma pack(pop)

}

#endif /*_BITMAPINFOHEADER_H_*/