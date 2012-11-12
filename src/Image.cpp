#include <cv.h>
#include <highgui.h>
using namespace cv;
int main(int argc, char** argv) {
	Mat image;
	printf("%s\n",argv[1]);
	image = imread(argv[1], 1);
	if (!image.data) {
		printf("No image data \n");
		return -1;
	}
	namedWindow("Display Image", CV_WINDOW_AUTOSIZE);
	imshow("Display Image", image);
	waitKey(0);
	return 0;
}
