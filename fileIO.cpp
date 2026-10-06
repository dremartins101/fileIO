#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(){
	std::stringstream ss;
	std::stringstream converter;
	std::stringstream converter2;
	std::string currentLine;
	std::string sIntA;
	std::string sIntB;
	std::string stringA;
	int intA;
	int intB;
	int intCount;

	// open file
	std::ifstream inFile;
	inFile.open("data.csv");
	if(inFile.is_open()){
		while (getline(inFile, currentLine)){
			// ss clearer
			ss.clear();
			ss.str("");
			converter.clear();
			converter.str("");
			converter2.clear();
			converter2.str("");

			ss.str(currentLine);

			getline(ss, sIntA, ',');
			getline(ss, sIntB, ',');
			getline(ss, stringA, ',');
			
			//test
			//std::cout << "sIntA: " << sIntA << "\n sIntB: " << sIntB << "\n stringA: " << stringA << std::endl;
			
			converter << sIntA;
			converter >> intA;

			converter2 << sIntB;
			converter2 >> intB;
			
			int intCount = intA + intB;
			// test			
			//std::cout << "int A: " << intA << "\n int B: " << intB << std::endl;
			//
			for(int i = 0; i < intCount; i++){
				std::cout << stringA;
			} // end for
			std::cout << "\n";
		} // end while
	} // end if
		else{
			std::cout << "Error: Unable to open file." << std::endl;
		}
		inFile.close();
} // end main

