#include <opencv4/opencv2/opencv.hpp>
#include <iostream>
#include "detector.h"

void Detector::color_detect(const cv::Mat& img, cv::Mat& masked) {
    cv::Mat hsv;
    cv::cvtColor(img, hsv, cv::COLOR_BGR2HSV);

    const cv::Mat hsv_min = (cv::Mat_<int>(3,1) << 0, 60, 0);
    const cv::Mat hsv_max = (cv::Mat_<int>(3,1) << 50*255/360, 255, 255);
    cv::inRange(hsv, hsv_min, hsv_max, masked);
}