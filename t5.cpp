#include <iostream>
#include <cmath>
using namespace std;

void disc(float discriminant, float a, float b);

main()
{
    float a, b, c, discriminant;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    discriminant = b * b - 4 * a * c;
    disc(discriminant, a, b);
}

void disc(float discriminant, float a, float b)
{
    if (discriminant > 0)
    {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Solutions: x = " << root1 << " and x = " << root2;
    }
    if (discriminant == 0)
    {
        float root1 = (-b) / (2 * a);
        cout << "Solution: x = " << root1;
    }
    if (discriminant < 0)
    {
        float root1 = (-b) / (2 * a);
        float root2 = (sqrt(- discriminant)) / (2 * a);
        cout << "Complex Solutions: x = " << root1 << " + " << root2 << "i and x = " << root1 << " - " << root2 << "i";
    }
}