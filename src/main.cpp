#include <iostream>
#include "DeliveryManager.h"
using namespace std;

int main() {
    DeliveryManager dm;
    int choice, id;
    string s, r, a, status;

    do {
        cout << "\n1.Add 2.Display 3.Update 4.Delete\n";
        cout << "5.Track 6.Search Sender 7.Search Status\n";
        cout << "8.Enqueue 9.Process 10.Show Queue\n";
        cout << "11.Undo 0.Exit\n";
        cout << "Data auto-saves on exit.\n";
        cin >> choice;

        switch (choice) {
        case 1:
            cin >> id; cin.ignore();
            getline(cin, s);
            getline(cin, r);
            getline(cin, a);
            dm.addParcel(id, s, r, a);
            break;
        case 2: dm.displayParcels(); break;
        case 3: cin >> id; dm.updateParcelStatus(id); break;
        case 4: cin >> id; dm.deleteParcel(id); break;
        case 5: cin >> id; dm.showTrackingHistory(id); break;
        case 6: cin >> s; dm.searchBySender(s); break;
        case 7: cin >> status; dm.searchByStatus(status); break;
        case 8: cin >> id; dm.enqueueParcel(id); break;
        case 9: dm.processDelivery(); break;
        case 10: dm.showQueue(); break;
        case 11: dm.undoLastAction(); break;
        }
    } while (choice != 0);

    return 0;
}
