#include<iostream>
#include<Set>
#include<string>

using namespace std;

int count(int *y, unsigned int x){
	set<int> mySet;

	for(unsigned int i = 0; i < x; i++){
	mySet.insert(y[i]);
	}

	int result;

	result = mySet.size();

	return result;

}
//Write function count() here.



int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
