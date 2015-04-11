#include<vector>
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

class	Cow{
public:
	void sort(int); 
	void count();
	void setv(int);//func(填我要輸入的參數type)
	int getsum();
private:
	vector<int> v;
	int next,sum;
};

