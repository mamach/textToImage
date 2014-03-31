/******************************************************************************

   PROJECT:			
   FILE:			
   AUTHOR:			
   DATE:
   DESCRIPTION:		

******************************************************************************/

#ifndef __MISC_H__
#define __MISC_H__

/*************************** OTHER INCLUDE FILES *****************************/

// Include Standard C/C++ Header Files Here
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Include OpenCV Header Files Here
#include <cv.h>
#include <highgui.h>
#include <cvaux.h>
#include <cxcore.h>

/*****************************************************************************/



/******************************************************************************

					MISCELLENEOUS PURPOSE FUNCTIONS

******************************************************************************/

// Function for Constructing the Image Name for Frame Number Indexed Images
// Inputs :-
//			(char*) imgPath : The Image Path
//			(char*) imgBaseName : The Image Base Name
//			(int) imgIndx : The Image Index
//			(char*) imgFormat : The Image Format
//			(int) zeroPaddingFormatSize : The Size of the Zero Padding
//			NOTE: This is Required to Zero Pad the Index e.g. f_9 becomes f_0009
//			NOTE: For a Zero Padding Size of 4
//			(int) maxZeroPaddingImgIndx : The Maximum Image Index for Zero Padding
//			(char*) imgName : The Image Name
// Outputs :-
//			(unsigned char) errCode : The Error Code of Execution
// Invoked As : errCode = constructImageName( imgPath , imgBaseName , imgIndx , imgFormat , zeroPaddingFormatSize , maxZeroPaddingImgIndx , imgName );
unsigned char constructImageName( char* imgPath , char* imgBaseName , int imgIndx , char* imgFormat , int zeroPaddingFormatSize , int maxZeroPaddingImgIndx , char* imgName );

// Function for Pausing Code at Certain Steps
// Inputs :-
//			(float) stepNum : The Step Number to be Displayed
// Outputs :-
//			None
// Invoked As : checkPoint( stepNum );
void checkPoint( float stepNum );


#endif
