//Takes text file with a FASTA string of 1-letter amino acid codes, all on one line
//Outputs results to a text file

//Header code goes here
#include <iostream>
#include <string>
#include <sstream>

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


	//Return function for if main() exits successfully
	return 0;
}