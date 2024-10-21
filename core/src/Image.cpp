#include "Image.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

namespace QRMan { 

    Image::Image(const std::string& fileName) 
        : fileName(fileName) 
    { 
        data = stbi_load(fileName.c_str(), &w, &h, &bpc, 0);
    }

    Image::~Image() { 
        stbi_image_free(data);
    }
}
