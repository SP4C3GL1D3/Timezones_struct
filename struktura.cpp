#include <iostream>
#include <string>

using namespace std;

int timezone, chose, LH, LM, calc, H, M;
string cas_lond = "12:00";

struct
{
    int LondonH = 13;
    int LondonM = 0;
    int LondonS = 0;
} london;

void timecalc()
{
    cout << "Enter London Hours: ";
    cin >> LH;
    cout << "Enter London Minutes: ";
    cin >> LM;

    cout << "Choose if you want to add or subtract time from your entered time: 1 = ADD | 2 = SUB" << endl << endl;
    cin >> calc;
    if (calc == 1)
    {
        cout << "Enter added hours: ";
        cin >> H;
        cout << "Enter added minutes: ";
        cin >> M;
        cout << endl;

        cout << "New time is: " << LH + H << ":" << LM + M;
    }
    else if (calc == 2)
    {
        cout << "Enter subbed hours: ";
        cin >> H;
        cout << "Enter subbed minutes: ";
        cin >> M;
        cout << endl;

        cout << "New time is: " << LH - H << ":" << LM - M;
    }
}

void entertime()
{
    cout << "time in london: " << london.LondonH << ":" << london.LondonM << london.LondonS << endl << endl;
}

void chooseTimeZone()
{
    cout << "choose what timezone you want to see current time: 1 = Berlin | 2 = Kiev | 3 = Minsk | 4 = Shanghai" << endl << endl;
    cin >> timezone;
    cout << endl;
}

void Choose()
{
    cout << "Choose from displayed options: 1 = time calc | 2 = timezones" << endl << endl;
    cin >> chose;

}

int main()
{
    Choose();
    if (chose == 1)
    {
        timecalc();
    }
    else if (chose == 2)
    {
        entertime();
        chooseTimeZone();
        switch (timezone)
        {
        case 1:
            cout << "time in Berlin is " << london.LondonH + 1 << ":" << london.LondonM << london.LondonS << endl;
            break;
        case 2:
            cout << "time in Kiev is " << london.LondonH + 2 << ":" << london.LondonM << london.LondonS << endl;
            break;
        case 3:
            cout << "time is Minsk is " << london.LondonH + 3 << ":" << london.LondonM << london.LondonS << endl;
            break;
        case 4:
            cout << "time is Shanghai is " << london.LondonH + 8 << ":" << london.LondonM << london.LondonS << endl;
            break;
        }
    }
}
/* HAHAHAHAHAHAHAHAAHAHAAHAHAHAHAHAHAAHAHAHHAHAHAH :) */

