#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;

int main()
{
	//����ԭͼ  
	Mat srcImage = imread("ch01\\1.jpg");
	//D:\\Work Station\\Visual Studio\\OpenCV4_Code\\OpenCV4_Code\\ch01\\1.jpg
	if (!srcImage.data)
	{
		std::cout << "Image not loaded";
		return -1;
	}

	//��ʾԭͼ
	imshow("��ԭͼ����ʴ����", srcImage);
	//���и�ʴ���� 
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	//��ʾЧ��ͼ 
	imshow("��Ч��ͼ����ʴ����", dstImage);
	waitKey(0); 

	return 0;
}