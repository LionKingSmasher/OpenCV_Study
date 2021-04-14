#include <iostream>
#include <stdio.h>

// #include "opencv2/highgui.hpp"
// #include "opencv2/videoio.hpp"
// #include "opencv2/imgcodecs.hpp"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int argc, char** argv){
    Mat img = imread("test.jpg");
    Mat grayscale_img(img.rows, img.cols, CV_8UC1);

    for(int y = 0; y < img.rows; y++){
        for(int x = 0; x < img.cols; x++){
            int avg_val = (img.at<Vec3b>(y, x)[0] + img.at<Vec3b>(y, x)[1] + img.at<Vec3b>(y, x)[2])/3;
            grayscale_img.at<uchar>(y, x) = avg_val;
        }
    }

    imshow("img", grayscale_img);
    waitKey(0);
    return 0;
}