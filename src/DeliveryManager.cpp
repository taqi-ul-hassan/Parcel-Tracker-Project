#include "DeliveryManager.h"
#include <iostream>
using namespace std;

DeliveryManager::DeliveryManager() {
    head = tail = nullptr;
    loadFromFile();   // 🔥 auto-load on start
}

DeliveryManager::~DeliveryManager() {
    saveToFile();     // 🔥 auto-save on exit
    while (head) {
        Parcel* temp = head;
        head = head->next;
        delete temp;
    }
}

void DeliveryManager::loadFromFile() {
    head = FileHandler::loadParcels(tail);
}

void DeliveryManager::saveToFile() {
    FileHandler::saveParcels(head);
}

/* ===== existing logic unchanged below ===== */

bool DeliveryManager::parcelExists(int id) {
    return findParcel(id) != nullptr;
}

Parcel* DeliveryManager::findParcel(int id) {
    Parcel* temp = head;
    while (temp) {
        if (temp->parcelID == id)
            return temp;
        temp = temp->next;
    }
    return nullptr;
}

/* (rest of your previously provided DeliveryManager.cpp stays EXACTLY the same) */
