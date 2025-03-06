#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;


int main(){
	ifstream inFile;
	string fullLine;
	inFile.open("data.csv");
	while(getLine(inFile, fullLine)){

	}
	inFile.close();
}
