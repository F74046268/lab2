#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "BMI.h"
using namespace std;

int main(){
	float height,weight;
	BMI John(1,1,1);
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	if(!inFile){cerr<<"Failed opening"<<endl;exit(1);}
	if(!outFile){cerr<<"Failed opening"<<endl;exit(1);}
	
	while(inFile>>height>>weight){
		if(height==0||weight==0)break;
		John.get(height,weight);
		outFile<<setprecision(4)<<John.compute()
		<<"\t"<<John.categorized()<<endl;
	}




	inFile.close();
	outFile.close();




	return 0;
}
