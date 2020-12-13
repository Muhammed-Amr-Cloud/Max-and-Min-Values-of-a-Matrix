/*
 * main.cpp
 *
 *  Created on: Dec 13, 2020
 *      Author: Muham
 */

#include <iostream>

typedef unsigned int uint32;


int main()
{
	const uint32 matrixRow = 3 ;
	const uint32 matrixCol = 3 ;


	int matrix[matrixRow][matrixCol] = {{3,4,6},{2,8,1},{4,0,4}};

	int maxValue = matrix[0][0];
	int minValue = matrix[0][0];

	uint32 index = 0 ;
	uint32 minIndex = 0 ;
	uint32 maxIndex = 0 ;

	uint32 maxValueRow  = 0 ;
	uint32 maxValueCol  = 0 ;

	uint32 minValueRow  = 0 ;
	uint32 minValueCol  = 0 ;

	for(uint32 i = 0 ; i < matrixRow ; i++)
	{

		for(uint32 j = 0 ; j < matrixCol ; j++)
		{
			index++;
			if(matrix[i][j] > maxValue)
			{
				maxValue = matrix[i][j];
				maxValueRow = i ;
				maxValueRow = j ;
				maxIndex = index ;

			}

			if(matrix[i][j] < minValue)
			{
				minValue = matrix[i][j];
				minValueRow = i ;
				minValueCol = j ;
				minIndex = index ;
			}

			std::cout<<matrix[i][j]<< " ";
		}
		std::cout<<std::endl;

	}


	std::cout<<"The min is "<<minValue<<
			"(index "<<minIndex-1<<",row "<<minValueRow+1<<",col "<<minValueCol+1<<")"<<std::endl;


	std::cout<<"And max is "<<maxValue<<
				"(index "<<maxIndex-1<<",row "<<maxValueRow+1<<",col "<<maxValueCol+1<<")"<<std::endl;

	return 0 ;
}

