#include <opencv2/opencv.hpp>

using namespace cv;

//https://docs.opencv.org/3.3.0/de/d25/imgproc_color_conversions.html
//run with
//toGrayScale image.jpg
//
int main( int argc, char** argv ){
  //image file as arg
  char* imageName = argv[1];
  Mat image;
  image = imread( imageName, IMREAD_COLOR );

  if (argc != 2 || !image.data )
  {
    printf( "no image" );
    return -1;
  }

  Mat gray_image;
  cvtColor( image, gray_image, COLOR_BGR2GRAY );

  imwrite( "graysiv.jpg", gray_image );
  namedWindow( imageName, WINDOW_AUTOSIZE );
  namedWindow( "Gray image", WINDOW_AUTOSIZE );

  imshow( imageName, image );
  imshow( "Gray image", gray_image );
  waitKey(0);

  return 0;
}
