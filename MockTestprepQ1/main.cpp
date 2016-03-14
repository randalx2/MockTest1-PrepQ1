// ****** QUESTION 1 *****
// Question 1 has 2 parts
//
// 1.1 Overload a set of functions "swap(x, y)" which take the names of two variables as arguments 
//     and swap the values contained in the variables.   This should work for two integers and 
//     two characters.  USE REFERENCES (NOT POINTERS)!!!
// 1.2 Write driver code that demonstrates the use of your functions by sorting an array of 10 integers 
//     and an array of 10 characters from lowest to highest. 
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

void swap(int&, int&);
void swap(char&, char&); //Passing array elements by reference

int main(){

	int integerArray[10] = { 1, 10, 6, 7, 2, 0, 14, 8, 50, 63 };
	char characterArray[10] = { 's', 'r', 'v', 'e', 'h', 'l', 'j', 'l', 'u', 'k' };

	//Do the sorting using the swap function
	//Sort from lowest to highest taking in two parameters at a time

	for (int i = 0; i < 10; i++){
		for (int j = i + 1; j < 10; j++)  //Nested loops
		{
			if (integerArray[i] > integerArray[j])
			{
				swap(integerArray[i], integerArray[j]);
			}
			if (characterArray[i] > characterArray[j])
			{
				swap(characterArray[i], characterArray[j]);
			}
		}
	}

	//Print out the integer array
	for (int i = 0; i < 10; i++)
	{
		cout << integerArray[i] << "\t";
	}

	//Print out the character array
	for (int i = 0; i < 10; i++)
	{
		cout << characterArray[i] << "\t";
	}

	system("PAUSE");
	return 0;
}

void swap(int &x, int &y)
{
	int temp = x; //hold value of x
	x = y;
	y = temp;
}

void swap(char &x, char &y)
{
	char temp = x; //hold value of x
	x = y;
	y = temp;
}