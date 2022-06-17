#pragma once
#include "string.h"
#include "ncnn/net.h"
#include "ncnn/layer.h"


typedef struct Object;

class Yolov5{
    public:
        Yolov5(const std::string& param, const std::string& bin);
        ~Yolov5();
        int run(const std::string& img_path);
    private:
        ncnn::Net *yolov5 = nullptr;
};