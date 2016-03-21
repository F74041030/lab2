#include <fstream>
#include <iostream>
#include"a.h"
using namespace std;
double bmi::seth(double height)
{return height;}
double bmi::setw(double weight)
{return weight;}
double bmi::Bmi(double height,double weight)
{return weight/(height/100)/(height/100);}
string bmi::show(double height,double weight)
	{       double b=Bmi(height,weight);
                if(b<15)
                 return "very severely underweight";
                if(b>=15&&b<16)
                 return "severly underweight";
                if(b>=16&&b<18)
                 return "underweight";
                if(b>=18&&b<25)
                 return "normal";
                if(b>=25&&b<30)
                 return "overweight";
                if(b>=30&&b<35)
                 return "moderately obese";
                if(b>=35&&b<40)
                 return "severly obese";
                if(b>=40)
                 return "very severly obese";

	}
