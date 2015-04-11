#include<iostream>
#include<vector>
#include<fstream>
#include<iomanip>
#include"A.h"
using namespace std;

int main(){
	Cow b;
	int size,temp;
	ifstream inFile("file.in",ios::in);
	inFile>>size;	
	while(inFile>>temp)
	{
		b.setv(temp);
	}
	b.sort(size);
	b.count();
	cout<<b.getsum()<<endl;
	return 0;
}	


