#ifndef DETECTOR_H
#define DETECTOR_H
#include <opencv4/opencv2/opencv.hpp>
#include <iostream>


class Detector {
    public:
        int state;
    private:
        void color_detect(const cv::Mat& img, cv::Mat& masked);
};
#endif