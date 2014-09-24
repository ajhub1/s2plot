#ifndef S2PLOT_TEST
#define S2PLOT_TEST


#include <iostream>
#include <vector>
//#include "s2plot/s2plot.h"


using namespace std;
using namespace s2plot;

class pc
{
	public:
	virtual void print_pc()=0;
};

class comp:public pc
{
	public:
		comp(int aa);
		void print();
		int a;
		int* b;
		void print_pc();
		vector<pc*>* temp;
		vector<pc*>* temp2;
		
		vector<s2plotVertex*>* vtemp;
		vector<s2plotVertex*>* vtemp2;
};


#endif
