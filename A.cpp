#include"A.h"
using namespace std;

void Cow::sort(int size){
	int moveitem,insert;//在sort裡才要用到	moveitem為現在要移的數字在哪一格
	for(int next=1;next<size;++next)
	{
		insert=v.at(next);//先將要移的數字存入insert
		moveitem=next;
		while(moveitem>0&&v.at(moveitem-1)<insert)
		{
			v.at(moveitem)=v.at(moveitem-1);
			--moveitem;
		}
	v.at(moveitem)=insert;
	}
}
void Cow::count(){
	sum=v.at(0)+v.at(1)+v.at(2)+v.at(3)+v.at(4);
}
void Cow::setv(int a){
	v.push_back(a);
}
int Cow::getsum(){
return sum;
}
