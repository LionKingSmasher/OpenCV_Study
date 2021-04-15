#include <iostream>
#include <stdio.h>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(int argc, char **argv){
    VideoCapture cap(0);
    if(!cap.isOpened()){ //카메라가 열리는지 체크
        printf("카메라가 열리지 않음");
        return -1;
    }
    Mat img;
    Mat gray_scale_img;
    while(1){
        cap >> img;
        cvtColor(img, gray_scale_img, COLOR_BGR2GRAY);
        imshow("camera", gray_scale_img);
        if(waitKey(25) == 27) break;
    }
    return 0;
}