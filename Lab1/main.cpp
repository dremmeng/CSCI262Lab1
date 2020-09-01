/* CSCI 261 Assignment: Stargate
 *
 * Author: Drew Remmenga
 *
 * This program draws a star diagram
 */

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
using namespace std;




int main() {

	ifstream file("lines.txt");
	if (!file.is_open())
	{
		cout << "Could not open file" << endl;
		return 1;
	}
	string str = " ";
	string buff = " ";
	string buffer = " ";
	int lines;
	int line=1;
	file >> lines;
	int minimum;
	file >> minimum;
	int maximum;
	file >> maximum;
	int line_found;
	string longest = "the";


	while (!file.eof())
	{
		line++;
		getline(file, buff);
		istringstream sin(buff);
		while (!sin.eof())
		{
			sin >> buffer;
			if (buffer.size() > str.size());
			{
				str = buffer;
			}
		}
		if (str.size() > longest.size()) 
		{
			longest = str;
			line_found = line;
		}
	}


	cout << longest << " " << line_found;
	
	file.close();

	return 0;                        // report our program exited successfully
}