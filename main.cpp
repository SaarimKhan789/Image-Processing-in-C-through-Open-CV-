#include <iostream>
#include <opencv2/opencv.hpp>
//#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;
Mat rotate(Mat src, double angle)   
{
    Mat dst;      //Mat object for output image file
    Point2f pt(src.cols/2., src.rows/2.);          //point from where to rotate    
    Mat r = getRotationMatrix2D(pt, angle, 1.0);      //Mat object for storing after rotation
    warpAffine(src, dst, r, Size(src.cols, src.rows));
    ///applie an affine transforation to image.
    return dst;         //returning Mat object for output image file
}

int main(int argc, char** argv) {

    if (argc != 2) {
        cout << "Expecting a image file to be passed to program" << endl;
        return -1;
    }
    
    Mat img = imread(argv[1]);
    
    if (img.empty()) {
        cout << "Not a valid image file" << endl;
        return -1;
    }
    
    Mat dst;
    dst=rotate(img,90);
    imshow("Original Image",img);
    imshow("Rotated Image",dst);
    waitKey(0);
    destroyAllWindows();

    return 0;
}
//./ImageProcessing /Users/saarimkhan/image/Saarim.jpg
//./ImageProcessing /Users/saarimkhan/picture.jpg