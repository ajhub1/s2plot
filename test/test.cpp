
#include "test.h"

using namespace std;
using namespace s2plot;

void comp::print_pc()
{
	cout << "print shifaz's cheesy PC" << a << endl;
}

comp::comp(int aa)
{
	a = aa;
	temp =  new vector<pc*>();
	temp2 = new vector<pc*>();
	
	vtemp =  new vector<s2plotVertex*>();
	vtemp2 = new vector<s2plotVertex*>();
}


void comp::print()
{
	vtemp->push_back(new s2plotVertex(0.0f,0.0f,0.0f,0.0f));
	vtemp->push_back(new s2plotVertex(0.0f,0.0f,0.0f,0.0f));
	vtemp->push_back(new s2plotVertex(0.0f,0.0f,0.0f,0.0f));
	vtemp->push_back(new s2plotVertex(0.0f,0.0f,0.0f,0.0f));

	vtemp2->insert(vtemp2->end(), vtemp->begin(), vtemp->end());
	
	cout << "print from " << a << endl;
	
}

int main ()
{

	comp computer(5);
	computer.print();

}
