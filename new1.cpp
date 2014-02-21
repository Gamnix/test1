//File Name : Program to find out the highest number stored in an array
//Assignment: 5
//Created by Gambhir Shrestha on 5/8/10/13.
//Email:gshrest2@mail.ccsf.edu
//Copyright (c) 2013 Gambhir Shrestha. All rights reserved.


#include <iostream> // includes library associated with input and output
using namespace std;

int main()
{
	int max = 0;    //declear and initilize max to 0
	int a [25] = {94, 59, 21, 81, 39, 94, 47, 98, 46, 91, 34, 75, 14, 49, 83, 14, 43, 69, 93, 14, 33, 50, 64, 76, 86}; 	//declear array

	for (int i = 0; i<25; i++)//Loop to calculate and find max
	{
		if ( a[i] > max) //search for max
			max= a[i];
	}
	cout << "The highest number in the array is : " << max << endl; 
	return 0;
    
}