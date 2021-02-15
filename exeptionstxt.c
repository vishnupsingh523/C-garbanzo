#include<iostream>
using namespace std;

void mightgowrong(){
	
	bool error=true;
	if(error){
		throw 8;
	}
}

int main()
{
	mightgowrong();
	return 0;
}
