/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Fabrizio Giolito
 */

#include <iostream>
#include "std_lib_facilities.h"

int search(string arr1[], string arr2[], string target);

int main() {
  
	int status = 0;
	string val1, val2, operation;
	
	string spelled_out[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	string digits[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	
	int index1, index2;

	while(status == 0){
		cout << "Enter two single digit values either as a number or spelled out next to each other followed by a space (ex. 2 3):\n";
		cin >> val1 >> val2 ;

		index1 = search(spelled_out, digits, val1);
		index2 = search(spelled_out, digits, val2);
		
		if(index1 != -1 && index2 != -1)
			status = 1;
		else
			cout << "One or both of your numbers are not single digit numbers. Please try again.\n";
	}

	cout << "Please enter the operation you want to perform:\n";
	cin >> operation;

	if(operation == "+")	
		cout << "The sum of " << val1 << " and " << val2 << " is " << index1 + index2;
	if(operation == "-")	
		cout << "The subtraction of " << val1 << " and " << val2 << " is " << index1 - index2;
	if(operation == "*")	
		cout << "The multiplication of " << val1 << " and " << val2 << " is " << index1 * index2;
	if(operation == "/")	
		cout << "The division of " << val1 << " and " << val2 << " is " << index1 / index2;

	return 0;
} 

int search(string arr1[], string arr2[], string target){

	for(int i = 0; i < 10; i++){
		
		if(arr1[i].compare(target) == 0)
			return i;
	}

	for(int i = 0; i < 10; i++){
		
		if(arr2[i].compare(target) == 0)
			return i;
	}

	return -1;
}