#include<iostream>
#include<fstream>
#include"a.h"
using namespace std;
int main()
{       bmi bmi1;
	double height,weight,b;
        ifstream filein("file.in");
        ofstream fileout("file.out",ios::out);
	while(filein>>height>>weight)
	{ if(height==0&&weight==0)
            break;
          fileout<<bmi1.seth(height)<<"\t"<<bmi1.setw(weight)<<"\t"<<bmi1.Bmi(height,weight)<<"\t"<<bmi1.show(height,weight)<<endl;
	}
        filein.close();
        fileout.close();
	return 0;
}
