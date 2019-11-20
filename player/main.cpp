#include <opencv4/opencv2/opencv.hpp>

int main(int argc, char const *argv[])
{
    if (argc <= 1) {
        printf("write file path\n");
        exit(EXIT_FAILURE);
    }
    cv::Mat frame;
    // cv::namedWindow("Playing", cv::WINDOW_AUTOSIZE);
    
    cv::VideoCapture cap(argv[1]);
    while(cap.read(frame)) {
        cv::imshow("Playing", frame);
        const int key = cv::waitKey(1);
        if(key == 'q'/*113*/)//qボタンが押されたとき
        {
            break;//whileループから抜ける．
        }
    }
    cv::destroyAllWindows();
    return 0;
}
