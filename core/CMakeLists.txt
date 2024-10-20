add_library(QRManCore src/Reader.cpp)

target_include_directories(QRManCore INTERFACE 
                            ${CMAKE_CURRENT_SOURCE_DIR}
                        )

