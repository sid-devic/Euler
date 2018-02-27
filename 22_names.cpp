#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	ifstream fin ("names.txt");

	string allNames;
	fin >> allNames;

	std::vector<string> names;
	stringstream ss(allNames);

	while(ss.good())
	{
		string dummy;
		getline(ss, dummy, ',');
		names.push_back(dummy);
	}

	// remove quotes
	for(int i = 0; i < names.size(); i++)
	{
		names[i].erase(0, 1);
		names[i].erase(names[i].length() - 1, 1);
	}

	bool noSwitches = false;
	while(!noSwitches)
	{
		for(int i = 0; i < names.size(); i++)
		{
			string temp = names[i];
			for(int j = 0; j < names.size(); j++)
			{
				if(temp < names[j])
				{
					
				}
			}
		}
	}

	cout << names[0] << " " << names[names.size() - 1] << endl;

	return 0;
}