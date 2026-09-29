#include <fstream>
#include <iostream>
#include <string>

int main(){
	std::ofstream outFile;
	outFile.open("example.dat");
	if (outFile.is_open()){
		outFile << "eggs" << std::endl;
		outFile << "milk" << std::endl;
		outFile << "bread" << std::endl;
		outFile.close();
	} else {
		std::cout << "unable to open file" << std::endl;
	} // end if and else

	//appending to a file
	std::ofstream appFile;
	appFile.open("example.dat", std::ios::app);
	appFile << "chips" << std::endl;
	appFile.close();

	// reading from a file
	std::ifstream inFile;
	inFile.open("example.dat");
	std::string item;
	while (!inFile.eof()){
		std::getLine(inFile, item);
		if (item != ""){
			std::cout << "We need " << item << ", dude." << std::endl;
		}
	}
	inFile.close();
		
