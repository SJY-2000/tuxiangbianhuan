//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//int main()
//{
//	Mat srcMat = imread("G:\\picture\\15.jpg");
//	Mat dstMat;
//	if (srcMat.empty())return -1;
//	float angle = -10.0, scale = 1;		//�Ƕ���ʱ��Ϊ����˳ʱ��Ϊ��
//	Point2f center(srcMat.cols*0.5, srcMat.rows*0.5);		//ͼ�����ļ�Ϊ��ת����
//	Mat affine_matrix = getRotationMatrix2D(center, angle, scale);		//������ת�Ƕȼ��������ɱ任����
//	warpAffine(srcMat, dstMat, affine_matrix, srcMat.size());		//����任
//	imshow("src", srcMat);
//	imshow("dst", dstMat);
//	waitKey(0);
//}