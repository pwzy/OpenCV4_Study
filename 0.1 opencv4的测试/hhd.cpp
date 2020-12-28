#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(void){
    cout << "hello world!" << endl;
    Mat img = imread("19.jpg");
    imshow("test", img);
    waitKey(0);
    return 0;
}



