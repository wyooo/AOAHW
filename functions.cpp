#include "HW3.h"

void capitalbdgt(bool dmode, ifstream &input)
{
	int num, index, numproposals;
	vector<int> proposals;
	vector<vector<int>> candr;

	
	while (input >> num)
		proposals.push_back(num);
	candr.resize(proposals[0]);
	
	
	for (int i = 0; i < proposals[0]; i++)
	{
		//i == locations j == proposal 
		if (i == 0)
			index = 1;
		

		numproposals = proposals[index] *2;
		index++;
		//read proposals for locations into cost and revenue vector
		for (int j = 0; j < numproposals; j++)
		{
			candr[i].push_back(proposals[index]);
			index++;
		}

	}

	for (int i = 0; i < candr.size(); i++)
	{
		for (int j = 0; j < candr[i].size(); j++)
			cout << candr[i][j] << " ";
		cout << endl;
	}



	//call naive version
	//call dynamic version
	//print results
}


void naiveversion(vector<vector<int>> candr)
{
	int test;

}