#include <fstream>
#include <iostream>
using namespace std;
class bmi
    { 
      private:
                double height;
                double weight;
      public:	
                double seth(double height);
		double setw(double weight);          
                double b;
		double Bmi(double height,double weight);
		string show(double height,double weight);
    };
