set(VENDOR_FILES
    "vendor/stb_image.h"
)

set(COMMON_FILES
    "src/Reader.cpp"
    "src/Reader.h"
    "src/Image.cpp"
    "src/Image.h"
)

add_library(QRManCore 
    "${COMMON_FILES}"  
    "${VENDOR_FILES}"  
)

target_include_directories(QRManCore PUBLIC 
                            "${CMAKE_CURRENT_SOURCE_DIR}/src"
                            "${CMAKE_CURRENT_SOURCE_DIR}/vendor"
                        )

