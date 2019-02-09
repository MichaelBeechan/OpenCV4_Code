#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;

int main()
{
	//载入原图  
	Mat srcImage = imread("ch01\\1.jpg");
	//D:\\Work Station\\Visual Studio\\OpenCV4_Code\\OpenCV4_Code\\ch01\\1.jpg
	if (!srcImage.data)
	{
		std::cout << "Image not loaded";
		return -1;
	}

	//显示原图
	imshow("【原图】腐蚀操作", srcImage);
	//进行腐蚀操作 
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	//显示效果图 
	imshow("【效果图】腐蚀操作", dstImage);
	waitKey(0); 

	return 0;
}