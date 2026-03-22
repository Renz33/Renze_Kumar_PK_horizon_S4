#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	double x1, x2, y1, y2, distance;
	double u, a, vmax;
	
	cout<<"Enter origin coordinates : ";
	cin>>x1>>y1;
	
	cout<<"Enter destination coordinates :";
	cin>>x2>>y2;
	
	distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	cout<<"The distance to destination is : "<<distance;
	
	cout<<"\n";
	
	cout << "Enter initial velocity: ";
	cin >> u;

	cout << "Enter acceleration: ";
    	cin >> a;

    	cout << "Enter maximum velocity: ";
    	cin >> vmax;

    	double t1 = (vmax - u) / a;
    	double s1 = (u * t1) + (0.5 * a * t1 * t1);

    	double total_time;

    	if (s1 >= distance)
    	{
		total_time = (-u + sqrt(u*u + 2*a*distance)) / a;
    	}
    	else
    	{
		double remaining_distance = distance - s1;
		double t2 = remaining_distance / vmax;

		total_time = t1 + t2;
    	}

	cout << "Total travel time: " << total_time << " seconds" << endl;

	return 0;
	
}
