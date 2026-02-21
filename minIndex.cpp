#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> findRestaurantEasy(vector<string>& list1, vector<string>& list2) {
    vector<string> result;
    int minSum = 10000; // large number

    for (int i = 0; i < list1.size(); i++) {
        for (int j = 0; j < list2.size(); j++) {
            if (list1[i] == list2[j]) {
                int indexSum = i + j;
                if (indexSum < minSum) {
                    result.clear();      // found smaller sum
                    result.push_back(list1[i]);
                    minSum = indexSum;
                } else if (indexSum == minSum) {
                    result.push_back(list1[i]); // same min sum
                }
            }
        }
    }

    return result;
}

int main() {
    vector<string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 = {"KFC","Shogun","Burger King"};

    vector<string> res = findRestaurantEasy(list1, list2);

    for (string s : res) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}