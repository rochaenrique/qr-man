#include "Reader.h"
#include <iostream>

namespace QRMan
{ 
    Reader::Reader(int helloTimes) 
    { 
        while (helloTimes-- > 0) 
            std::cout  << "Hello " << helloTimes 
                << " times\n";
    }

}
