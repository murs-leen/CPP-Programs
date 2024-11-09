// Trip Planner for Weather Conditions

#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    char weather;
    float temperature, wind;
    cout << "Enter Weather forcast" << endl;
    cout << "(s : sunny, r : rainy, n : snowy, f : foggy ) : ";
    cin >> weather;
    if (cin.fail() || (weather != 's' && weather != 'r' && weather != 'n' && weather != 'f')){
        cout << "Invalid input" << endl;
        return 0;
    }
    cout << "Enter temperature in degree celsius: ";
    cin >> temperature;
    if(cin.fail()){
        cout << "Invalid input";
        return 0;
    }
    cout << "Enter wind speed in km/h: ";
    cin >> wind;
    if(cin.fail()){
        cout << "Invalid input";
        return 0;
    }
    if(weather != 's' || temperature < 10 || temperature > 40 || wind > 50){
        cout << "\nWeather conditions are not appropriate for out door trip. " << endl;
        cout << endl;
        cout << setw(49) << "<*><*><*> Stay home, Stay safe! <*><*><*>\n" << endl;
    }
    else
        cout << "\nHurrah! you can go for out door trip as weather conditions are valid :)" << endl;
    return 0;

}