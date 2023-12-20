#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

void cre(){
	ofstream fout;
	ifstream fin;
	string file_name;
	string text;
	nam:
	cout<<"please input name file with file extension :";
	cin>>file_name;
	fin.open(file_name);
	if(fin.is_open()){
		cout<<"ERROR: file with this name exists"<<endl;
		goto nam;
	}
	cout<<"OK"<<endl;
	fout.open(file_name);
	cout<<"please input text to your file(PS:in end please print '$' ): "<<endl;
	getline(cin,text,'$');
	cout<<"OK"<<endl;
	cout<<endl;
	fout<<text;

}
void wrte(){
	ifstream fin;
	string file_name;
	string text;
	cout<<"please input file name : ";
	cin>>file_name;
	fin.open(file_name);getline(fin,text);
	if(!fin.is_open()){cout<<"ERROR/n";}
	cout<<"note:"<<endl;
	cout<<text;
	cout<<endl;
}

int main() {
	while(1){
	//ofstream fout;
	//ifstream fin;
	cout<<"your notes:"<<endl;
	cout<<"1.create new notes"<<endl;
	cout<<"2. write note"<<endl;
	cout<<"0.exit"<<endl;
	cout<<"your answer: ";
	int va;
	cin>>va;
	switch(va){
	case 1:
		cre();
		break;
	case 2:
		wrte();
		break;
	case 0 :
		cout<<"goodbye..."<<endl;
		return 0;
	default:

		cout<<"ssory , but your answer is incorect !"<<endl;
	}
	}
}