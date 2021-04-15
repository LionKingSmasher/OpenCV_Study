/*

        OpenCV Histogram
    
    Written by: Shin4(LionKingSmasher)
    Description: OpenCV 히스토그램을 공부해보는 것에 흥미롭습니다.

*/

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char ** argv){
    Mat img_1 = imread("hacker.jpg", 0);
    Mat hist_img;
    // Mat img_2 = img_1 * 2;
    // Mat img_3 = img_1 / 2;

    // MatND histogram;

    // const int* channel_numbers = { 0 };
    // float channel_range[] = { 0.0, 255.0 };
    // const float* channel_ranges = channel_range;
    // int number_bins = 255;
    // calcHist(&img_1, 1, channel_numbers, Mat(), histogram, 1, &number_bins, &channel_ranges);

    equalizeHist(img_1, hist_img);
    imshow("original", img_1);
    imshow("Histogram", hist_img);

    waitKey(0);
}