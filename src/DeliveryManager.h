#ifndef DELIVERY_MANAGER_H
#define DELIVERY_MANAGER_H

#include "Parcel.h"

class DeliveryManager {
private:
    Parcel* head;
    Parcel* tail;

public:
    DeliveryManager();
    ~DeliveryManager();

    bool parcelExists(int id);
    void addParcel(int id, string sender, string receiver, string address);
    void displayParcels();
    void searchParcelByID(int id);
    void updateParcelStatus(int id);
    void deleteParcel(int id);
};

#endif
