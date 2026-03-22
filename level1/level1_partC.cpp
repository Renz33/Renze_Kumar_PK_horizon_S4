#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    double u, a, vmax;

    
    cout << "Enter origin coordinates (x1 y1): ";
    if (!(cin >> x1 >> y1))
    {
        cout << "Invalid input for origin coordinates!" << endl;
        return 1;
    }

    cout << "Enter destination coordinates (x2 y2): ";
    if (!(cin >> x2 >> y2))
    {
        cout << "Invalid input for destination coordinates!" << endl;
        return 1;
    }

   
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    
    cout << "Enter initial velocity: ";
    if (!(cin >> u) || u < 0)
    {
        cout << "Invalid initial velocity!" << endl;
        return 1;
    }

    cout << "Enter acceleration: ";
    if (!(cin >> a) || a <= 0)
    {
        cout << "Acceleration must be positive!" << endl;
        return 1;
    }

    cout << "Enter maximum velocity: ";
    if (!(cin >> vmax) || vmax <= 0)
    {
        cout << "Maximum velocity must be positive!" << endl;
        return 1;
    }

    
    double t1 = (vmax - u) / a;

    if (t1 < 0)
    {
        cout << "Max velocity must be greater than initial velocity!" << endl;
        return 1;
    }

    
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

    
    cout << "\nDistance to destination: " << distance << " m" << endl;
    cout << "Time required: " << total_time << " seconds" << endl;

    return 0;
}
