// Purpose : Converting Text To Image

// Include Standard C/C++ Header Files Here
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include<iostream>


// Include OpenCV Header Files Here
#include <cv.h>
#include <highgui.h>
#include <cvaux.h>
#include <cxcore.h>

// Include CVDRIK Header Files Here
#include "Misc.h"

using namespace std;

// The Main Code
int main( int argc , char** argv )
{
	// Check Usage
	if( argc != 2 )
	{
		// Show Purpose
		printf( "\n\n Purpose : Text To Image \n\n" );	
		
		// Show Usage
		printf( "\n\n Usage As : ./textToImage [ ParamFileName ] \n\n" );
		
		// Show Sample Command Line
		printf( "\n\n Sample Command Line : ./textToImage param_TextToImage.txt \n\n" );
		
		return( 1 );
	}
	
	// Opening the Parameter File for Reading
	FILE* fp;
	fp = fopen( argv[1] , "r" );
	
	// Reading the Parameter File : Image File Information
	char paramNameString[100] , eqString[3] , headerString[100];
	fscanf( fp , "%s" , headerString );
	int imgWidth;
	fscanf( fp , "%s%s%d" , paramNameString , eqString , &imgWidth );
	int imgHeight;
	fscanf( fp , "%s%s%d" , paramNameString , eqString , &imgHeight );
	int bgRed;
	fscanf( fp , "%s%s%d" , paramNameString , eqString , &bgRed );
	int bgGreen;
	fscanf( fp , "%s%s%d" , paramNameString , eqString , &bgGreen );
	int bgBlue;
	fscanf( fp , "%s%s%d " , paramNameString , eqString , &bgBlue );
	char text[500];
	fgets ( text , 500, fp);
	// Closing Parameter File
	fclose( fp );
// 	cout<<"text:"<<text<<endl;
// 	checkPoint( 1.0 );
	IplImage* opImage = 0X00;
	opImage = cvCreateImage( cvSize(imgWidth ,imgHeight) , IPL_DEPTH_8U , 3 );
	
// 	Changing background color of Image
	
	int baseIndex = -(opImage->widthStep);
	for( int h=0;h<opImage->height;h++ )
	{
		baseIndex = baseIndex + opImage->widthStep;
		int currIndex = baseIndex;
		for( int w=0;w<opImage->width;w++ )
		{
			opImage->imageData[ currIndex] = ( char ) bgBlue;
			opImage->imageData[ currIndex + 1 ] = ( char ) bgGreen;
			opImage->imageData[ currIndex + 2 ] = ( char ) bgRed;
			currIndex = currIndex + 3;
		}
	}
	// Create the Windows for iDsplaying Images
 	cvNamedWindow( "processedData" , CV_WINDOW_AUTOSIZE );
	cvResizeWindow("processedData", imgWidth , imgHeight );
	cvMoveWindow("processedData" , 600 , 300);
	//Structure defination
	CvFont font;
	int font_face = CV_FONT_HERSHEY_SIMPLEX;
	double hScale = 0.5;
	double vScale = 0.5;
	double shear = 0;
	int thickness = 2;
	int line_type = 2 ;
	cvInitFont(  &font , font_face, hScale, vScale, shear , thickness , line_type );
	cvPutText( opImage , text, cvPoint ( 30 , 60 ) , &font, cvScalar( 255, 255 , 255 ) );	
	
	cvShowImage("processedData" , opImage);
	cvWaitKey();
	cvSaveImage( "opImage.jpg" , opImage );
	cvReleaseImage( &opImage );
	cvDestroyWindow( "processedData" );
// 	// Error Code 0 : All Well, That Ends Well
	return( 0 );
}