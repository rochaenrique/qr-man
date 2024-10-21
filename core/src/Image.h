#include <string>

namespace QRMan { 

    class Image { 
    public: 
        Image(const std::string& filePath);     
        ~Image();

        const std::string toString() const;

    private:
        int w;
        int h;
        int bpc;
        unsigned char* data;
        const std::string& filePath;
    };
}

