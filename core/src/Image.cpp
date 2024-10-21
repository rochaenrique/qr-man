#include <iostream>
#include <format>
#include "Image.h"

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

namespace QRMan { 

    Image::Image(const std::string& filePath) 
        : filePath(filePath) 
    { 
        data = stbi_load(filePath.c_str(), &w, &h, &bpc, 0);
        std::cout << toString() << std::endl;
    }

    Image::~Image() { 
        stbi_image_free(data);
    }

    const std::string Image::toString() const {
        return std::format("Loaded {} ({}x{}), BPC: {}", filePath, w, h, bpc);
    };
}
