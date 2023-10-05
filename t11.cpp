#include <iostream>
using namespace std;

string calculatePoolState(int V, int P1, int P2, float H);

main()
{
    int V, P1, P2;
    float H;
    cout << "Enter volume of the pool in liters: ";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> P2;
    cout << "Enter hours that the worker is absent: ";
    cin >> H;
    string answer = calculatePoolState(V, P1, P2, H);
    cout << answer;
}

string calculatePoolState(int V, int P1, int P2, float H)
{
    float P = P1 + P2;
    float totalWaterFlow = P * H;
    if (totalWaterFlow >= V)
    {
        int overFlowWater = totalWaterFlow - V;
        string OF = to_string(overFlowWater);
        string hour = to_string(H);
        string result = "For " + hour + " hours, the pool overflows with " + OF + " liters.";
        return result;
    }
    else
    {

        int poolPercentage = totalWaterFlow / V * 100;
        int pipe1Percentage = P1 / P * 100;
        int pipe2Percentage = P2 / P * 100;
        string PP = to_string(poolPercentage);
        string P1P = to_string(pipe1Percentage);
        string P2P = to_string(pipe2Percentage);
        string final = "The pool is " + PP + "% full." + " Pipe 1: " + P1P + "%." + " Pipe 2: " + P2P + "%.";
        return final;
    }
}