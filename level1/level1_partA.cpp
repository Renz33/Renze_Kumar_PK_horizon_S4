#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	double x1, x2, y1, y2, distance;
	
	cout<<"Enter origin coordinates : ";
	cin>>x1>>y1;
	
	cout<<"Enter destination coordinates :";
	cin>>x2>>y2;
	
	distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	cout<<"The distance to destination is : "<<distance;
	
	return 0;
}
