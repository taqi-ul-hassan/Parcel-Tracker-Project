#ifndef PARCEL_H
#define PARCEL_H

#include <string>
using namespace std;

class Parcel {
public:
    int parcelID;
    string senderName;
    string receiverName;
    string deliveryAddress;
    string status;
    Parcel* next;

    Parcel(int id, string sender, string receiver, string address, string stat) {
        parcelID = id;
        senderName = sender;
        receiverName = receiver;
        deliveryAddress = address;
        status = stat;
        next = nullptr;
    }
};

#endif
