#ifndef QRD_NETWORK_H_INCLUDED
#define QRD_NETWORK_H_INCLUDED
#include "qrd.h"

class Qrd_Network{
private:
    qrd *qrd1, *qrd2, *qrd3, *qrd4;
public:
    Qrd_Network(qrd *qrd1,qrd *qrd2, qrd *qrd3, qrd *qrd4);
    int *read();
};
#endif // QRD_NETWORK_H_INCLUDED
