#include <iostream>
using namespace std;

bool EligibleToVote(int age);

int main(){
	
	int age;
	
	cout<<"enter the age:: ";
	cin>>age;
	
	if(EligibleToVote(age)){
		cout<<"You are eligible to VOTE!!!"<<endl;
	}else {
		cout<<"You are not eligible to VOTE"<<endl;
	}
	
	return 0;
}
bool EligibleToVote (int age){
	
	return age>=18;
}