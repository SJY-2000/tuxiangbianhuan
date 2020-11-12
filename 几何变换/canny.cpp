#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	VideoCapture cap;
	cap.open(0);
	if (!cap.isOpened())
	{
		std::cout << "不能打开视频" << std::endl;
		return -1;
	}
	Mat srcMat;
	cap >> srcMat;
	Mat dstMat;
	Canny(srcMat, dstMat, 20, 230, 3, false);
	imshow("输出",dstMat);
	waitKey(30);
}