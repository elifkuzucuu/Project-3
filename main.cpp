#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include "point.h"
#include "line.h"
#include "shape.h"
#include "triangle.h"

using namespace std;



int main(){
	
	string str;
	int i=0,size=1;
	double p1,p2;
	point *array;
	array = (point *)malloc(sizeof(point)*size);
	ifstream inputFile;
	inputFile.open("input.txt");
	
	if (inputFile.is_open())
	{
		
		while(!inputFile.eof())
		{
			getline(inputFile,str);
			
			if(str[0]!= '\0' )
			{
					
				
				
				p1 = str[0];
				p2 = str[2];
				point a(p1,p2);
				array[i]=a;
				i++;
				size++;
				array = (point *)realloc(array, sizeof(point)*size);
				
			}
		
		}
	inputFile.close();
	}
	
	
	line deneme(array[0],array[1]);
	double d = deneme.getLength();
	cout<<d;
	free(array);
	
}
	
