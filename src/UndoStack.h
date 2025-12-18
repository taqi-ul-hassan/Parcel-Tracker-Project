#ifndef UNDO_STACK_H
#define UNDO_STACK_H

#include "Parcel.h"

class UndoStack {
private:
    Parcel* snapshot;   // store last parcel state
    string action;      // ADD, DELETE, UPDATE

public:
    UndoStack() {
        snapshot = nullptr;
        action = "";
    }

    void save(string act, Parcel* parcel) {
        if (snapshot) delete snapshot;
        snapshot = new Parcel(*parcel); // shallow copy is enough here
        action = act;
    }

    Parcel* getSnapshot() {
        return snapshot;
    }

    string getAction() {
        return action;
    }

    void clear() {
        snapshot = nullptr;
        action = "";
    }
};

#endif
