#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	Mat srcMat = imread("G:\\picture\\15.jpg",1);
	Mat dstMat;
	if (srcMat.empty())return -1;
	Point2f src_pt[] = {
						Point2f(200,200),
						Point2f(250,200),
						Point2f(200,100)};
	Point2f dst_pt[] = {
						Point2f(300,100),
						Point2f(300,50),
						Point2f(200,100) };
	Mat affine_matrix = getAffineTransform(src_pt, dst_pt);
	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());
	imshow("src", srcMat);
	imshow("dst", dstMat);
	waitKey(0);
}

