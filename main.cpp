#include "yolov5.hpp"
#include "string.h"

int main(int argc, char* argv[]){
    // std::string param_path = "D:/work/CPlusProject/yolov5_ncnn/data/yolov5.param";
    // std::string bin_path = "D:/work/CPlusProject/yolov5_ncnn/data/yolov5.bin";
    // Yolov5 model(param_path, bin_path);
    // std::string img_path = "D:/work/CPlusProject/yolov5_ncnn/data/zidane.jpg";
    // int out = model.run(img_path);

    std::string param_path = "D:/yolov5.param";
    std::string bin_path = "D:/yolov5.bin";
    Yolov5 model(param_path, bin_path);
    std::string img_path = "D:/work/CPlusProject/yolov5_ncnn/data/zidane.jpg";
    int out = model.run(img_path);
}