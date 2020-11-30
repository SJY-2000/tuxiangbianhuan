#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	Mat srcMat = imread("G:\\picture\\15.jpg");
	Mat dstMat;
	if (srcMat.empty())return -1;
	float angle = -10.0, scale = 1;		//角度逆时针为正，顺时针为负
	Point2f center(srcMat.cols*0.5, srcMat.rows*0.5);		//图像中心即为旋转中心
	Mat affine_matrix = getRotationMatrix2D(center, angle, scale);		//根据旋转角度及比例生成变换矩阵
	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());		//仿射变换
	imshow("src", srcMat);
	imshow("dst", dstMat);
	waitKey(0);
}