#ifndef PARCEL_H
#define PARCEL_H

#include <string>
#include "TrackingEvent.h"
using namespace std;

class Parcel {
public:
    int parcelID;
    string senderName;
    string receiverName;
    string deliveryAddress;
    string status;

    Parcel* next;
    TrackingEvent* historyHead;   // 🔥 Tracking list head

    Parcel(int id, string sender, string receiver, string address, string stat) {
        parcelID = id;
        senderName = sender;
        receiverName = receiver;
        deliveryAddress = address;
        status = stat;
        next = nullptr;
        historyHead = nullptr;
    }

    void addTrackingEvent(string desc, string time) {
        TrackingEvent* event = new TrackingEvent(desc, time);
        event->next = historyHead;
        historyHead = event;
    }
};

#endif
