#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;


int main(){
	ifstream inFile;
	string currentLine;
	stringstream converter;
	int number1;
	int number2;
	string text;
	inFile.open("data.csv");
	while(getline(inFile, currentLine)){
		//cout << currentLine << endl;
		
		converter.clear();
		converter.str("");

		converter << currentLine;

		converter >> number1 >> number2 >> text;

		cout << number1 + number2 << " " << text << endl;

		for(int i=0;i<(number1 + number2);i++){
			cout << text << " ";
		}
	}
	inFile.close();
	return 0;
}
