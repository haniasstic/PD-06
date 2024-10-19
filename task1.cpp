#include <iostream>
using namespace std;
string decideActivity(string temperature, strinh humdidity);
main()
{
    string temperature, humidity, result;
    cout << " Enter temperatre (warm or cold): ";
    cin >> temperature;
    cout << " Enter the humidity (dry or humid): ";
    cin >> humidity;
    result = decideActivity(temperature, humidity);
    cout << result;
}
string decideActivity(string temperature, strinh humdidity)
{
    string activity;
    if (temperature == "warm")
        if (humidity == "dry")
            activiy = "play tennis";
    if (humidity == "humid")
        activity = "Swim";
    if (temperature == "cold")
        if (humidity == "dry")
            activity = "play basketball";
    if (humidity == "humid")
        activity = "watch tv";
    return activity;
}
