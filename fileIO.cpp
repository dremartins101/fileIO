#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(){
	std::stringstream ss;
	std::stringstream converter;
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

			ss.str(currentLine);

			getline(ss, sIntA, ',');
			getline(ss, sIntB, ',');
			getline(ss, stringA, ',');
			
			//test
			std::cout << "sIntA: " << sIntA << "\n sIntB: " << sIntB << "\n stringA: " << stringA << std::endl;

			converter << sIntA;
			converter >> intA;

			converter << sIntB;
			converter >> intB;
			
			// test			
			std::cout << "int A: " << intA << " \n int B: " << intB << std::endl;
			//

			intCount = intA + intB;
			std:: cout << intCount << std::endl;
			/*for (int i = 0; i <= intCount; i++){
				std::cout << stringA << " " << std::endl;
			} // end for
			*/
		} // end while
	} // end if
		else{
			std::cout << "Error: Unable to open file." << std::endl;
		}
		inFile.close();
} // end main
			
