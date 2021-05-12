//Takes text file with a FASTA string of 1-letter amino acid codes, all on one line
//Outputs results to a text file

//Header code goes here
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

//Namespace declaration
using namespace std;

//Define the memory check function using VS memory check capabilities
#ifdef _MSC_VER
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define VS_MEM_CHECK _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#else
#define VS_MEM_CHECK
#endif

//Program main function
int main(int argc, char* argv[]) {

	//Enable VS memory check
	VS_MEM_CHECK;

	//Use input stream functionality to open input text file
	const char* inputFileName = (argc > 1) ? argv[1] : "InputFile.txt";
	istream& inputFile = *(new ifstream(inputFileName));
	if (!inputFile) {
		cout << "Could not open input file!" << endl;
		return 1;
	}
	
	//Use output stream object to open output text file
	const char* outputFileName = (argc > 2) ? argv[2] : "OutputFile.txt";
	ostream& outputFile = *(new ofstream(outputFileName));
	if (!outputFile) {
		cout << "Could no open output file!" << endl;
		return 2;
	}

	//Read in and parse the FASTA from the input file
	vector<char> originalFasta;
	vector<char> modifiedFasta;
	string inputString = "";
	for (inputString; getline(inputFile, inputString);) {
		inputFile >> inputString;
	}
	//Fill vectors with the FASTA information
	int i = 0;
	for (i = 0; i < inputString.size(); ++i) {
		originalFasta.push_back(inputString.at(i));
	}
	for (i = 0; i < inputString.size(); ++i) {
		modifiedFasta.push_back(inputString.at(i));
	}

	//Main loop for user executing mutations
	int userDecision = 0;
	while (userDecision != 3) {
		cout << "Menu:\n1: Perform point mutation\n2: See list of current mutations\n3: Quit" << endl;
		cout << "Enter your decision: ";
		cin >> userDecision;
		cout << endl;

		//Point mutation option

		//Print current mutations to console option

		//Quit option
	}

	//Delete all dynamic memory allocated to the stack to avoid memory leaks
	

	//Return function for if main() exits successfully
	return 0;
}