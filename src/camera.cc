#include <opencv2/opencv.hpp>
#include <vector>

using namespace cv;
using namespace std;

int main(int argv, char** argc){
  Mat frame;
  VideoCapture vid(0);
  if(!vid.isOpened()){
    return -1;
  }

  while (vid.read(frame))
  {
    imshow("webcam", frame);//ROI);
    if(waitKey(30) >= 0)
    {
      break;
    }
  }
}
