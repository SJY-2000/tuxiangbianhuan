#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	VideoCapture cap;
	cap.open(0);
	if (!cap.isOpened())
	{
		std::cout << "���ܴ���Ƶ" << std::endl;
		return -1;
	}
	Mat srcMat;
	cap >> srcMat;
	Mat dstMat;
	Canny(srcMat, dstMat, 20, 230, 3, false);		//canny���ӱ�Ե��ȡ��
	imshow("���",dstMat);
	waitKey(30);
}