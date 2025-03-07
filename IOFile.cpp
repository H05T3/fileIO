#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;


int main(){
	ifstream inFile;
	string currentLine;
	stringstream converter;
	stringstream ss;
	int number1;
	int number2;
	string sCounter;
	string text;
	inFile.open("data.csv");
	while(getline(inFile, currentLine)){
		ss.clear();
		ss.str("");
		converter.clear();
		converter.str("");

		ss.str(currentLine);
		
		getline(ss, sCounter, ',');
		converter << sCounter;
		converter >> number1;

		converter.clear();
		converter.str("");

		getline(ss, sCounter, ',');
		converter << sCounter;
		converter >> number2;

		getline(ss,text);

//		cout <<"First number: " << number1<< "; Second number: "<<number2<<"; String: "<<text<<endl;

		for(int i=0;i<(number1 + number2);i++){
			cout << text << " ";
		}
	}
	inFile.close();
	return 0;
}
