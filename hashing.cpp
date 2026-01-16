#include <bits/stdc++.h>
using namespace std;

/*
==============================
BRUTE FORCE COUNTING
Time Complexity:
- For each query → O(N)
- Total → O(Q × N) ≈ O(N²)

Used only for understanding, NOT optimal
*/

// int f(int num, int arr[], int n){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == num) count++;
//     }
//     return count;
// }

/*
----------------------------------
MEMORY LIMIT NOTES
----------------------------------
int[10^6] inside main → OK
int[10^7] inside main → RISKY (stack overflow)
int[10^7] globally → OK
bool uses less memory than int
*/

/*
==============================
NUMBER HASHING (ARRAY)
==============================
Condition:
- Works only when numbers are SMALL (≤ 10^6 / 10^7)

Steps:
1. Create hash array
2. Pre-compute frequency
3. Answer queries in O(1)
*/

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     // Pre-computation
//     int hash[13] = {0};   // size based on constraints
//     for(int i = 0; i < n; i++){
//         hash[arr[i]]++;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;

//         // Fetch in O(1)
//         cout << hash[number] << endl;
//     }
// }

/*
==============================
CHARACTER HASHING (STRING)
==============================
'a' to 'z' → 26 characters
ASCII based hashing → 256 characters
*/

// int main(){
//     string s;
//     cin >> s;

//     // Pre-compute
//     int hash[26] = {0};
//     for(int i = 0; i < s.size(); i++){
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;

//         // Fetch
//         cout << hash[c - 'a'] << endl;
//     }
// }

/*
==============================
PROBLEM WITH ARRAY HASHING
==============================
❌ If number > 10^7 → array hashing fails

Solution:
✔️ Use MAP / UNORDERED_MAP (STL)

----------------------------------
MAP vs UNORDERED_MAP
----------------------------------

map:
- Stores keys in SORTED order
- Time: O(log N) for insert & fetch

unordered_map:
- Stores keys RANDOMLY
- Time: O(1) average, O(N) worst (collision)

Worst case due to:
1. Division method (key % size)
2. Folding method
3. Mid-square method
*/

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // ==============================
    // PRE-COMPUTATION USING MAP
    // ==============================
    map<int, int> mpp;   // key = number, value = frequency

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;   // increase count
    }

    // ==============================
    // ITERATION OVER MAP
    // ==============================
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    // ==============================
    // QUERY HANDLING
    // ==============================
    int q;
    cin >> q;

    while(q--){
        int number;
        cin >> number;

        // Fetching frequency
        // If key not present → map returns 0
        cout << mpp[number] << endl;
    }
}
