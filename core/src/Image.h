#include <string>

namespace QRMan { 

    class Image { 
    public: 
        Image(const std::string& fileName);     
        ~Image();

    private:
        int w;
        int h;
        int bpc;
        unsigned char* data;
        const std::string& fileName;
    };
}
