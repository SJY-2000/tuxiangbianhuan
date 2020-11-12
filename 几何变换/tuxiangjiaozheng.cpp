#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	Mat srcMat = imread("G:\\picture\\33.jpg");
	Mat dstMat;
	if (srcMat.empty())return -1;
	float angle = 9.0, scale = 1.15;
	Point2f center(srcMat.cols*0.5, srcMat.rows*0.5);
	Mat affine_matrix = getRotationMatrix2D(center, angle, scale);
	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());
	imshow("src", srcMat);
	imshow("dst", dstMat);
	waitKey(0);
}