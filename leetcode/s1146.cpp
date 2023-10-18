#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class SnapshotArray {
   public:
    int id = 0;
    vector<int> data;
    vector<unordered_map<int, int>> history;
    SnapshotArray(int length) {
        history.assign(length,{0,0});
    }

    void set(int index, int val) {
        history[id][index]=val;
    }

    int snap() {
        return id++;
    }

    int get(int index, int snap_id) {
        for (int i = snap_id; i >= 0; i--) {
            if (history[i].count(index)) {
                return history[i][index];
            }
        }
        return 0;
    }
};
