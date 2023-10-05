#include <iostream>
using namespace std;
string timeTravel(int hour, int min);
main()
{
    int hour, min;
    cout << "Enter hours: ";
    cin >> hour;
    cout << "Enter minutes: ";
    cin >> min;
    timeTravel(hour, min);
    string finalTime = timeTravel(hour, min);
    cout << finalTime;
}
string timeTravel(int hour, int min)
{
    if (hour <= 23 && min <= 59)
    {

        int time;
        time = (hour * 60) + (min + 15);
        int hrr = time / 60;
        int minutes = time % 60;
        string hours = to_string(hrr);
        string m = to_string(minutes);
        string result = hours + ":" + m;
        return result;
    }
}