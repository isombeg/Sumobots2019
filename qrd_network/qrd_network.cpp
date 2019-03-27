#include "qrd_network.h"
#include "qrd.h"

Qrd_Network::Qrd_Network(qrd *q1,qrd *q2, qrd *q3, qrd *q4)
    {
        this->qrd1 = q1;
        this->qrd2 = q2;
        this->qrd3 = q3;
        this->qrd4 = q4;
    }

int* Qrd_Network :: read(){
    int *arr = new int[4];
    arr[0] = this->qrd1->assess();
    arr[1] = this->qrd2->assess();
    arr[2] = this->qrd3->assess();
    arr[3] = this->qrd4->assess();
    return arr;
}


