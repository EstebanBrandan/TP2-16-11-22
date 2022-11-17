/*
 * bitmap.h
 *
 *  Created on: 16 nov. 2022
 *      Author: luis
 */

#ifndef SRC_BITMAP_BITMAP_H_
#define SRC_BITMAP_BITMAP_H_

#include <iostream>

using namespace std;
#include "./EasyBMP.h"





 /*int main()
 {
 	int X=10;
 	int Y=10;
 	int SIZE=10;

 	Gen gen[10][10];


 	for(int x=0;x<X;x++){
 		for(int y=0;y<Y;y++){
 			gen[x][y].genAlfa=0;
 			gen[x][y].genBeta=0;
 			gen[x][y].genGama=0;
 		}
 	}

 	gen[0][0].genAlfa=255;
 	gen[0][0].genBeta=0;
 	gen[0][0].genGama=0;

 	gen[1][1].genAlfa=0;
 	gen[1][1].genBeta=255;
 	gen[1][1].genGama=0;

 	gen[2][2].genAlfa=0;
 	gen[2][2].genBeta=0;
 	gen[2][2].genGama=255;

 	gen[3][3].genAlfa=255;
 	gen[3][3].genBeta=0;
 	gen[3][3].genGama=0;

 	gen[4][4].genAlfa=0;
 	gen[4][4].genBeta=255;
 	gen[4][4].genGama=0;

 	cout<<"1"<<endl;



 	createBMP(X,Y,SIZE);


 	for(int x=0;x<X;x++)
 	{
 		for(int y=0;y<Y;y++)
 		{
 			cout<<"X= "<<x<<"Y= "<<y<<endl;
 			cout<<gen[x][y].genAlfa<<gen[x][y].genGama<<gen[x][y].genBeta<<endl;
 			setBigPixel( x,  y,  SIZE ,gen[x][y].genAlfa, gen[x][y].genGama ,gen[x][y].genBeta);
 		}
 	}
 	return 0;
 }*/

 void createBMP(int x, int y, int size)
{
 	BMP Sample;
 		Sample.SetSize(x*size,x*size);
 		Sample.SetBitDepth(8);
 		Sample.WriteToFile("test2.bmp");
 }

 void setBigPixel(int x, int y, int size,int r, int g ,int b)
 {
 	BMP Sample;
 	Sample.ReadFromFile("test2.bmp");


 	for(int i=0;i<size;i++)
 	{
 		for(int j=0;j<size;j++)
 		{

 			Sample((x*size)+i,(y*size)+j)->Red=r;
 			Sample((x*size)+i,(y*size)+j)->Green=g;
 			Sample((x*size)+i,(y*size)+j)->Blue=b;
 			Sample(x,y)->Alpha=0;
 		}
 	}
 	Sample.WriteToFile("test2.bmp");
 }




#endif /* SRC_BITMAP_BITMAP_H_ */
