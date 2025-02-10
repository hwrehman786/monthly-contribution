#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream myfile("example.txt");
    if(!myfile)
    {
    	cout<<"error in opening";
    	return 1;
	}
	string line;
	while(!myfile){
	cout<<"reading data"
	getline(myfile,line);
	cout<<line<<endl;
}
myfile.close();
 return 0;
}
