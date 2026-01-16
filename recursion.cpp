#include <bits/stdc++.h> //include all libraries
using namespace std;

void rec1(int i,int n){
    
    //base case
    if(i>n){
        return;
    }
    //rec case
    cout<<"raj\n";
    rec1(i+1,n);
}

void rec2(int i,int n){
    
    //base case
    if(i>n){
        return;
    }
    //rec case
    cout<<i;
    rec2(i+1,n);
}

void rec3(int i){
    
    //base case
    if(i<1){
        return;
    }
    //rec case
    cout<<i;
    rec3(i-1);
}


void backtracking(int i){
    
    //base case
    if(i<1){
        return;
    }
    //rec case
    backtracking(i-1);
     cout<<i;
}

void backtracking2(int i, int n){
    
    //base case
    if(i>n){
        return;
    }
    //rec case
    backtracking2(i+1,n);
     cout<<i;
}

int recsum(int i){
    
    int sum=0;
    
    //base case
    if(i<1) return sum; //parameter return
    //rec case 
    
    return i + recsum(i-1); // i + f(n)
    
}


int fact(int i){ //TC->O(N)
                //SC->O(N)
    //base case
    if(i<1) return 1; 
    //rec case 
    
    return i*fact(i-1); // i + f(n)
    
}

void arraySwap(int l , int arr[], int r){
    
    //base case
    if(l >= r/2 ) return;
   // if(l >= r-l-1 ) return;
    //rec case 
    
    swap(arr[l], arr[r-l-1]);
    
    arraySwap(l+1, arr, r);
}

bool palindrom(int l, string &s){ /*pass by refrence 
                                   - No copy is made
                                    - Same string used in all calls
                                    -Faster & interview-safe
                                    */
                                    
                                   /* Pass by VALUE
                                   -s is copied each time
                                   - Memory inefficient
                                   - Slower recursion*/
    
    //base case
    if(l >= s.size()/2) return true;
    
    //rec case
    
    if(s[l] != s[s.size()-l-1] ) return false;
    
    return palindrom(l+1, s);
}

int fibo(int n){ //TC-> 2^n exponential
    
    //base case
    if(n <= 1 ) return n;
    
    //rec case 
    int last = fibo(n-1);
    int seclast= fibo(n-2);
    
    return last + seclast;
    
    
}

/*                                             f(n)
                                           /      \
                                      (n-1)        (n-2) 
                                      /    \         |       \
                                (n-1)-1     (n-1)-1  (n-2)-1  (n-2)-2
                                /     \
                      ((n-1)-1)-1      ((n-1)-1)-2 */
                      







void sub(int idx, vector<int> &ds, int arr[],int n){ //TC-> 2^n x n
                                                    //SC-> O(n)
    
    //base case 
    if(idx>=n){
        
        for(auto it: ds){
            cout<<it<<" ";
        }
        
        if (ds.size() == 0){
        cout<<"{ }";
    }
    
    cout << endl;
    return;
    
    }
    
    //rec case 
    
    //take or pick the particular index into the subsequence
    ds.push_back(arr[idx]);
    
    sub(idx+1, ds , arr , n);
    
    //not pick, or not take condition, this element in not added to your subsequence
    ds.pop_back();
    
    sub(idx+1, ds , arr , n);
    
    
}






//Powset Algo to solve the subsequence or rec

/*Print all subsequence:-> a contigous / non- contigous sequence, which follows the order 

arr-> {3,1,2}
                {} empty set
                 3 contigous
                 1 contigous
                 2 contigous
                 31 contigous
                 12 contigous
                 32 not contigous
                 312 contigous
*/


void subSum(int idx, vector<int> &ds, int s , int sum, int arr[], int n ) {
    
    //base case 
    if(idx==n){
        
        if(s==sum){
            
            for(auto it: ds) cout<< it <<" ";
            cout<< endl;
            
        }
        return;
    }
    
    //rec case
    
    //take or pick the particular index into the subsequence 
    
    ds.push_back(arr[idx]);
    s+= arr[idx];
    subSum(idx+1, ds, s ,sum, arr, n );
    
    //not pick, or not take condition, this element in not added to your subsequence
    ds.pop_back();
    s-=arr[idx];
    subSum(idx+1, ds, s ,sum, arr, n );
}


bool subSumOne(int idx, vector<int> &ds, int s , int sum, int arr[], int n ) {
    
    //base case 
    if(idx==n){
        
        //condition satisfied
        if(s==sum){
            
            for(auto it: ds) cout<< it <<" ";
            cout<< endl;
            return true;
        }
        
        //condition not satisfied 
        
        else return false;
    }
    
    //rec case
    
    //take or pick the particular index into the subsequence 
    
    ds.push_back(arr[idx]);
    s+= arr[idx];
   if (subSumOne(idx+1, ds, s ,sum, arr, n ) == true) return true;
    
    //not pick, or not take condition, this element in not added to your subsequence
    ds.pop_back();
    s-= arr[idx];
   if(subSumOne(idx+1, ds, s ,sum, arr, n ) == true) return true;
   
  return false;
}

int subSumCount(int idx, int s , int sum, int arr[], int n ) { // TC-> 2^n
    
    // condition not satisfied
    //strictly done if array contains positives only
    
    if(s>sum) return 0;
    
    //base case 
    if(idx==n){
        
        //condition satisfied
        if(s==sum) return 1;
        
        //condition not satisfied 
        
        else return 0;
    }
    
    //rec case
    
    //take or pick the particular index into the subsequence 
    
    s += arr[idx];
int l =  subSumCount(idx+1, s ,sum, arr, n );
    
    //not pick, or not take condition, this element in not added to your subsequence
    s -= arr[idx];
int r =  subSumCount(idx+1, s ,sum, arr, n );
   
  return l + r ;
}


int main() {
// 	int n;
// 	cin>>n;
// cout<<fact(n);


//     int n;
//     cin >>n;
    
//     int arr[n];
    
//     for(int i=0; i<n; i++) cin>>arr[i];
    
//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
// cout<<endl;
//      arraySwap(0,arr,n);
     
//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";



//     string s;
//     cin>>s;
//   cout<< palindrom(0,s);



//         int n;
//         cin>>n;
//         int arr[n];

// for(int i=0; i<n; i++) arr[i]= fibo(i);

// for(int i=0; i<n; i++) cout <<arr[i]<<" ";


 


//   int arr[]={3,2,1};
//   int n=3;
//   vector<int> ds;
//   sub(0, ds, arr, n);




        // int arr[]={1, 2, 1};
        // int n =3;
        // int sum= 2;
        // vector<int> ds;
        // subSumOne(0, ds , 0, sum,  arr , n );
        
        
        
        
int arr[]={1, 2, 1};
        int n =3;
        int sum= 2;
       cout<< subSumCount(0, 0, sum,  arr , n );
        
        	return 0;
}
