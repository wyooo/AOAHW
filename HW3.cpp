#include "HW3.h"



int main(int argc, char *argv[])
{
	string debug;
	ifstream proposal;
	bool dmode = false;
	
	if (argc == 4)
		debug = argv[3];
	
	for (int i = 0; i < debug.size(); i++)
		toupper(debug[i]);
	
	if (argc < 3)
	{
		cout << "Program needs file name and start amount to run" << endl;
		return -1;
	}

	if (argc == 4 && debug == "D")
		dmode = true;
	proposal.open(argv[1]);
	
	if (!proposal.is_open())
	{
		cout << "Failed to open " << argv[1] << "." << endl;
		return -1;
	}
	
	capitalbdgt(dmode, proposal);

	proposal.close();
	return 0;

}