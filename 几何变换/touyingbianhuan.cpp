//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//int main()
//{
//	Mat srcMat = imread("G:\\picture\\22.jpg", 1);
//	Mat dstMat;
//	if (srcMat.empty())return -1;
//	Point2f pts1[] = {
//		Point2f(0,0),
//		Point2f(100,0),
//		Point2f(0,100),
//		Point2f(100,100)};
//	Point2f pts2[] = {
//		Point2f(0,0),
//		Point2f(100,20),
//		Point2f(0,100),
//		Point2f(100,120)};
//	Mat perspective_matrix = getPerspectiveTransform(pts1, pts2);
//	warpPerspective(srcMat, dstMat, perspective_matrix, srcMat.size());
//	imshow("src", srcMat);
//	imshow("dst", dstMat);
//	waitKey(0);
//}