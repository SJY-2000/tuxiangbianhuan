#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	Mat srcMat = imread("G:\\picture\\22.jpg",1);
	Mat dstMat;
	if (srcMat.empty())return -1;
	Point2f src_pt[] = {
						Point2f(0,0),
						Point2f(250,0),
						Point2f(0,250)};
	Point2f dst_pt[] = {
						Point2f(0,250),
						Point2f(250,250),
						Point2f(250,500) };
	Mat affine_matrix = getAffineTransform(src_pt, dst_pt);		//生成放射矩阵
	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());		//仿射变换
	imshow("src", srcMat);
	imshow("dst", dstMat);
	waitKey(0);
}

