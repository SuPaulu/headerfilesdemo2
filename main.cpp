#include <iostream>
#include "classes.h"

using namespace std;

int main()
{
    int makePitch;
    double pitchSpeed;

    while(true)
    {
        cout << "+++ Make a pitch!! +++" << endl;
        cout << "=== Your Arsenal ===" << endl;
        cout << "[1] Eephus Pitch" << endl;
        cout << "[2] 12-6 Curveball" << endl;
        cout << "[3] Four-Seam Fastball" << endl;
        cout << "Your choice? ";
        cin >> makePitch;
        if(makePitch == 1)
            {
                cout << "How fast can you throw it? ";
                cin >> pitchSpeed;
                Pitch* newPitch = new Eephus();
                newPitch->showPitch();
                newPitch->showPitch(pitchSpeed);
                break;
            }
        else if(makePitch == 2)
            {
                cout << "How fast can you throw it? ";
                cin >> pitchSpeed;
                Pitch* newPitch = new TwelveSixCurve();
                newPitch->showPitch();
                newPitch->showPitch(pitchSpeed);
                break;
            }
        else if(makePitch == 3)
            {
                cout << "How fast can you throw it? ";
                cin >> pitchSpeed;
                Pitch* newPitch = new FourSeamFastball();
                newPitch->showPitch();
                newPitch->showPitch(pitchSpeed);
                break;
            }
        else{
                cout << endl;
                cout << "You do not have that pitch in your arsenal" << endl;
                cout << endl;
            }
    }

    return 0;
}
