#ifndef QRD_H_INCLUDED
#define QRD_H_INCLUDED

class qrd{
private:
    int pinA, pin; // pin A is the variable for the actual name of the pin on the board //pin is the name of the variable of the pin number itself
    void setup();
public:
    qrd(int pinA1, int pin1);
    int read();
    int assess();
};

#endif // QRD_H_INCLUDED
