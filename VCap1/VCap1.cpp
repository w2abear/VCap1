// VCap1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <opencv\cv.h>
#include <opencv\highgui.h>


using namespace std;
char key;

int main()
{
	cvNamedWindow("Camera_Output", 1);
	CvCapture* capture = cvCaptureFromCAM(CV_CAP_ANY);

	while (1) 
	{
		IplImage* frame = cvQueryFrame(capture);   //create image from capture
		cvShowImage("Camera_Output", frame);

		key = cvWaitKey(10);
		if (char(key)==27) 
		{
			break;
		}

	}

	cvReleaseCapture(&capture);
	cvDestroyWindow("Camera_Output");


    return 0;
}

