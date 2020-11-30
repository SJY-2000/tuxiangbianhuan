#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	Mat srcMat = imread("G:\\picture\\33.jpg",1);
	Mat dstMat;
	if (srcMat.empty())return -1;
	
	
	int height = srcMat.rows;
	int width = srcMat.cols;
	int x1, y1, x2;
	for (int i = 0; i<width; i++)
	{
		if ((srcMat.at<Vec3b>(0, i)[0] + srcMat.at<Vec3b>(0, i)[1] + srcMat.at<Vec3b>(0, i)[2]) / 3 < 245)
			x1 = i;
	}
	for (int j = 0; j < height; j++)
	{
		if ((srcMat.at<Vec3b>(j, 0)[0] + srcMat.at<Vec3b>(j, 0)[1] + srcMat.at<Vec3b>(j, 0)[2]) / 3 < 245)
			y1 = j;
	}
	for (int k = 0; k<width; k++)
	{
		if ((srcMat.at<Vec3b>(height - 1, k)[0] + srcMat.at<Vec3b>(height - 1, k)[1] + srcMat.at<Vec3b>(height - 1, k)[2]) / 3 < 245)
			x2 = k;
	}
	Point2f src_pt[] = {
						Point2f(x1,0),
						Point2f(0,y1),
						Point2f(x2,height - 1)};
	Point2f dst_pt[] = {
						Point2f(0,0),
						Point2f(0,height - 1),
						Point2f(width-1,height - 1) };
	Mat affine_matrix = getAffineTransform(src_pt, dst_pt);		//生成放射矩阵
	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());		//仿射变换
	imshow("src", srcMat);
	imshow("dst", dstMat);
	waitKey(0);
}

