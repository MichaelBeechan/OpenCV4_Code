#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	//读取本地的一张图片便显示出来
	Mat img = imread("D:\\Work Station\\Visual Studio\\OpenCV4_Code\\OpenCV4_Code\\nichijou.jpg");
	//cout << img;
	imshow("MM Viewer", img);
	//等待用户按键
	waitKey(0);
}
