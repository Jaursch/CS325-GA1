#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
	ifstream InputFile;
	InputFile.open("input.txt"); 
	
	int m, n, k;
       	string input;

	getline(InputFile, input, ',');
	m = stoi(input); //amount of binary files

	getline(InputFile, input, ',');
	n = stoi(input); //amount of numbers in b. files

	getline(InputFile, input);
	k = stoi(input); //lowest number

	InputFile.close();	
	
	ifstream BinaryFile;

	
	return 0;
} 
