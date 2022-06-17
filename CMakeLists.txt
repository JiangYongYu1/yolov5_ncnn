cmake_minimum_required(VERSION 3.10)
project(yolov5_ncnn)
include_directories(D:/work/thirdparty/compiled/ncnn/include)
include_directories(D:/work/thirdparty/compiled/opencv452_s/include)
include_directories(${PROJECT_SOURCE_DIR}/include)

link_directories(D:/work/thirdparty/compiled/opencv452_s/lib)
link_directories(D:/work/thirdparty/compiled/ncnn/lib)

set(OpenCV_LIBS 
    opencv_world452
    ade
    libjpeg-turbo
    libopenjp2
    libpng
    libtiff
    libwebp
    zlib
    )


file(GLOB_RECURSE library_src RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} src/*.cpp main.cpp)
add_executable(demo ${library_src})
target_link_libraries(demo ${OpenCV_LIBS} ncnn)