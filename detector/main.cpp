#include <opencv4/opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char const *argv[])
{
    cv::Mat frame;
    // cv::namedWindow("Playing", cv::WINDOW_AUTOSIZE);
    
    cv::VideoCapture cap(0);

    if (!cap.isOpened()) {
        std::cout << "Cannot access Webcamera" << std::endl;
        exit(EXIT_FAILURE);
    }
    const cv::Mat white_img = cv::Mat::ones(frame.rows, frame.cols, CV_16U) * 255;
    std::vector<cv::Mat> cnts;
    cv::findContours(frame, cnts, cv::RETR_LIST, cv::CHAIN_APPROX_SIMPLE);
    cv::Mat cnts = cnts[1]; // grab_contours

    while (cap.read(frame)) {
        
    }

    return 0;
}
