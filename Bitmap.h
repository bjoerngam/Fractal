// Bitmap class definiton

#ifndef _BITMAP_H_
#define _BITMAP_H_

#include <string>
#include <cstdint>
#include <memory>

using namespace std;

namespace caveofprogramming{

    class Bitmap{

        private:
        int m_width{0};
        int m_height{0};
        //unique pointer no need with this to freeing the memory at the distructor
        unique_ptr<uint8_t[]> m_pPixels{nullptr};

        public:
        Bitmap(int width, int height);
        virtual ~Bitmap();
        bool write(string filename);
        void setPixel(int x, int y, u_int8_t red, u_int8_t green, u_int8_t blue);

    };

}

#endif /* _BITMAP_H_ */