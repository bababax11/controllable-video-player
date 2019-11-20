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
    const int len_frames = int(cap.get(cv::CAP_PROP_FRAME_COUNT));
    int frame_n = len_frames;
    while(cap.read(frame)) {
        cv::imshow("Playing", frame);
        const int key = cv::waitKey(1);
        if(key == 'q'/*113*/)//qボタンが押されたとき
        {
            break;//whileループから抜ける．
        }
        frame_n -=1;
        cap.set(cv::CAP_PROP_POS_FRAMES, frame_n);
    }
    cv::destroyAllWindows();
    return 0;
}
