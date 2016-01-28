//============================================================================
// Name        : HardwoodSellerC.cpp
// Description : Main class for the Hardwood Seller
//============================================================================

#include <iostream>
using namespace std;
#include <fstream>
#include <sstream>
#include <cstring>
#include <list>
#include <string>

int main() {
	cout << "This is the order information: " << endl << endl;"
	readInputFile("order.txt");
	return 0;
}

/*
 * Method to read the input file
 */
void readInputFile(string inputFilePath) 
{
	string customerName;
	string address;
	string date;
	string woodtype;
	string bf;
	
	double total = 0;
	double max = 0;

	std::list<WoodItem> mylist;
	ifstream inputFile;
	inputFile.open(inputFilePath);
    
	getline(inputFile, customerName, ';');
	getline(inputFile, address, ';');
	getline(inputFile, date, ';');
	
	while(getline(inputFile, woodtype, ';'))
	{
	getline(inputFile, bf, ';');
	int x = stoi(bf);
	WoodItem temp(woodtype, x, 0);
	mylist.push_back(temp);
	total = total + temp.getPrice();
	if (max < temp.getTime())
	{
	max = temp.getTime();
	}
	// output after reading the order text
	
	cout << "Customer : " << customerName << endl << endl;
	
	cout << "Address : " << address << endl << endl;
	
	cout << Wood\tPrice << endl << endl; 
	
	for (std::list<WoodItem>::iterator it = mylist.begin(); it != mylist.end(); ++it)
	{
	cout << (*it).woodtype << "\t\t" << (*it).price << endl; 	
	}
	cout << "Estimated Time : " << max << endl << endl; 
	
	cout << "Total : " << "$" << total << endl << endl; 
	
	cin,get() // pause the console
	}