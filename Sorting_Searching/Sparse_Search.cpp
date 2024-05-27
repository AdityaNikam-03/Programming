#include<iostream>
#include<cstring>
using namespace std;

/*int search(string arr[], int n, string key) {
    int s = 0, e = n - 1, mid, ml, mr;

    while (s <= e) {
        mid = (s + e) / 2;
        ml = mid - 1;
        mr = mid + 1;

        if (arr[mid] == "") {
            // Update mid pointing to nearest non-empty str
            while (1) {
                if (mr <= e && arr[mr] != "") {
                    mid = mr;
                    break;
                } else if (ml >= s && arr[ml] != "") {
                    mid = ml;
                    break;
                }

                if (ml < s && mr > e) {
                    return -1;
                }

                mr++;
                ml--;
            }
        } else if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return -1;
}

int main() {
    string arr[] = {"ai", "", "", "bat", "", "", "car", "cat", "", "", "dog", ""};
    string s = "bat";
    int n = 12;
    int loc = search(arr, n, s);
    cout << "Location : " << loc << endl;
    return 0;
}*/

int search(string arr[], int n, string key) {
    int s = 0, e = n - 1, mid;

    while (s <= e) {
        mid = (s + e) / 2;

        // Handle empty strings by updating mid to point to the nearest non-empty string
        while (arr[mid] == "" && mid <= e) {
            mid++;
        }

        if (mid > e) {
            return -1;  // No non-empty string found in the right half, exit the loop
        }

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return -1;
}

int main() {
    string arr[] = {"ai", "", "", "bat", "", "", "car", "cat", "", "", "dog", ""};
    string s = "bat";
    int n = 12;
    int loc = search(arr, n, s);
    cout << "Location : " << loc << endl;
    return 0;
}

