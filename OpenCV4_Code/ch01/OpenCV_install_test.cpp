#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	//��ȡ���ص�һ��ͼƬ����ʾ����
	Mat img = imread("D:\\Work Station\\Visual Studio\\OpenCV4_Code\\OpenCV4_Code\\nichijou.jpg");
	//cout << img;
	imshow("MM Viewer", img);
	//�ȴ��û�����
	waitKey(0);
}
