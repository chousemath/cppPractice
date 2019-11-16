#include <iostream>
#include <vector>

using namespace std;

vector<int> moveToEnd(vector<int> arr, int el);

int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    vector<int> xarr = moveToEnd(arr, 1);
    for (vector<int>::size_type i = 0; i != xarr.size(); ++i) {
        cout << xarr[i] << endl;
    }
    return 0;
}


vector<int> moveToEnd(vector<int> arr, int el) {
    vector<int> res;
    int count = 0;
    for (vector<int>::size_type i = 0; i != arr.size(); ++i) {
        if (arr[i] == el) ++count;
        else res.push_back(arr[i]);
    }
    for (int i = 0; i < count; ++i) res.push_back(el);
    return res;
}

//vector<int> moveToEnd(vector<int> arr, int el) {
//    for (vector<int>::size_type i = 0; i != arr.size(); ++i) {
//        if (arr[i] == el) {
//            arr.erase(arr.begin() + i);
//            cout << "Erased!" << endl;
//        }
//    }
//    return arr;
//}
