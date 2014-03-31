/*********************************************************************************

   PROJECT:			
   FILE:			
   AUTHOR:			
   DATE:
   DESCRIPTION:		

*********************************************************************************/


/*************************** OTHER INCLUDE FILES *****************************/

#include "Misc.h"

/*****************************************************************************/


/******************************************************************************

                                FUNCTIONS

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
unsigned char constructImageName( char* imgPath , char* imgBaseName , int imgIndx , char* imgFormat , int zeroPaddingFormatSize , int maxZeroPaddingImgIndx , char* imgName )
{
	// Check Inputs
	if( ( imgIndx < 0 ) || ( zeroPaddingFormatSize < 0 ) || ( maxZeroPaddingImgIndx <= 0 ) )
	{
		// Error Code 1 : Invalid Inputs
		return( 1 );
	}

	// Case-I : If Zero Padding is Required
	if( zeroPaddingFormatSize > 0 )
	{
		// Create the Format String
		char formatString[50];
		sprintf( formatString , "%%s%%s%%0%dd.%%s" , zeroPaddingFormatSize );

		//printf( "\n\nformatString = %s\n\n" , formatString ); getchar();

		// Check If Image Index is Within Limits
		if( imgIndx <= maxZeroPaddingImgIndx )
		{
			// Perform Zero Padding of Image Index in Image Name
			sprintf( imgName , formatString , imgPath , imgBaseName , imgIndx , imgFormat );
		}
		// Otherwise...
		else
		{
			// Construct the Image Name Without Zero Padding
			sprintf( imgName , "%s%s%d.%s" , imgPath , imgBaseName , imgIndx , imgFormat );
		}
	}
	// Case-II : If No Zero Padding is Required
	else
	{
		// Construct the Image Name Without Zero Padding
		sprintf( imgName , "%s%s%d.%s" , imgPath , imgBaseName , imgIndx , imgFormat );
	}

	// Error Code 0 : All Well, That Ends Well
	return( 0 );
}

// Function for Pausing Code at Certain Steps
// Inputs :-
//			(float) stepNum : The Step Number to be Displayed
// Outputs :-
//			None
// Invoked As : checkPoint( stepNum );
void checkPoint( float stepNum )
{
	printf( "\n\n Paused At Step %f \n\n" , stepNum );
	getchar();
}
