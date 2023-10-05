#include <iostream>
#include <cmath>
using namespace std;
void perp(float base, float angle);
main()
{
    float distance, angle;
    cout << "Enter the distance from the base of the tree (in feet): ";
    cin >> distance;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angle;
    perp(distance, angle);
}
void perp(float base, float angle)
{
    float height, x;
    x = angle * 3.14159265 / 180;
    height = base * tan(x);
    cout << "The height of the tree is: " << height << " feet";
}