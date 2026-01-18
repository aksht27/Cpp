#include <bits/stdc++.h>
using namespace std;

/*
========================================
ARRAY BASIC PROBLEMS – REVISION NOTES
========================================
All problems are from Striver A2Z Array Basics.
Focus:
- Time Complexity
- Space Complexity
- Interview-friendly logic
*/

// -------------------------------------
// 1. Largest Element in an Array
// -------------------------------------

// Brute Force (Sorting)
// TC: O(N log N)
// SC: O(1) if in-place sort
/*
int bruteLargestEle(int n, int arr[]) {
    sort(arr, arr + n);
    return arr[n - 1];
}
*/

// Optimal
// TC: O(N)
// SC: O(1)
int optimalLargestEle(int n, int arr[]) {
    int maxi = arr[0]; // IMPORTANT: don't use 0 (array may have negatives)

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}

// -------------------------------------
// 2. Second Largest Element (No Sorting)
// -------------------------------------

// Optimal
// TC: O(N)
// SC: O(1)
int optimalSecondLargest(int n, int arr[]) {
    int largest = arr[0];
    int secondLargest = INT_MIN; // for negative numbers

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    // If secondLargest never updated
    if (secondLargest == INT_MIN) return -1;
    return secondLargest;
}

// -------------------------------------
// 3. Check if Array is Sorted
// -------------------------------------

// TC: O(N)
// SC: O(1)
bool checkIfSorted(int n, int arr[]) {

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// -------------------------------------
// 4. Remove Duplicates from Sorted Array
// -------------------------------------

// Brute Force
// TC: O(N log N + N)
// SC: O(N)
/*
int bruteRemoveDup(int n, int arr[]) {
    set<int> st;
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    int index = 0;
    for (auto it : st) {
        arr[index++] = it;
    }
    return index;
}
*/

// Optimal (Two Pointer)
// TC: O(N)
// SC: O(1)
int optimalRemoveDup(int n, int arr[]) {

    int i = 0; // slow pointer (unique index)

    for (int j = 1; j < n; j++) { // fast pointer
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; // number of unique elements
}

// -------------------------------------
// MAIN
// -------------------------------------

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Uncomment what you want to test

    // cout << optimalLargestEle(n, arr) << endl;
    // cout << optimalSecondLargest(n, arr) << endl;
    // cout << checkIfSorted(n, arr) << endl;

    // int k = optimalRemoveDup(n, arr);
    // for (int i = 0; i < k; i++) cout << arr[i] << " ";

    return 0;
}
