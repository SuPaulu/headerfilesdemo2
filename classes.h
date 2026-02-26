#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Pitch
{
public:
    virtual void showPitch()
    {
        cout << "You made a pitch" << endl;
    }

    virtual void showPitch(double pitchSpeed)
    {
        cout << "The pitch reached" << pitchSpeed << " km/h.";
    }
};

class Eephus : public Pitch
{
public:

    void showPitch() override
    {
        cout << endl;
        cout << "You made an Eephus pitch" << endl;
    }

    void showPitch(double pitchSpeed) override
    {
        cout << "The Eephus pitch reached " << pitchSpeed << " km/h.";
        cout << endl;
    }
};

class TwelveSixCurve : public Pitch
{
public:


    void showPitch() override
    {
        cout << endl;
        cout << "You made a 12-6 Curve pitch" << endl;
    }

    void showPitch(double pitchSpeed) override
    {
        cout << "The 12-6 Curve pitch reached " << pitchSpeed << " km/h.";
        cout << endl;
    }
};

class FourSeamFastball : public Pitch
{
public:

    void showPitch() override
    {
        cout << endl;
        cout << "You made a Four-Seam Fastball pitch" << endl;
    }

    void showPitch(double pitchSpeed) override
    {
        cout << "The Four-Seam Fastball pitch reached " << pitchSpeed << " km/h.";
        cout << endl;
    }
};
#endif // TESTHEADER_H_INCLUDED
