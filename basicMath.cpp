#include <bits/stdc++.h>
using namespace std;
//Reverse number
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int revno=0;
    while(n>0){
        int lastdigit=n % 10;
        revno= (revno*10)+ lastdigit;
        n=n/10;
    }
    cout<<revno;
}*/

//Palindrome 
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int dupn=n;
    int revno=0;
    while(n>0){
        int lastdigit=n % 10;
        revno= (revno*10)+ lastdigit;
        n=n/10;
    }
    cout<<revno<<endl;

    if(dupn==revno){
        cout<<"It's a palindrome!";
    }
    else{
        cout<<"It's not a palindrome";
    }
}*/

//Armstrong 
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int dupn=n;
    int sum=0;
    while(n>0){
        int lastdigit=n % 10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    cout<<sum<<endl;

    if(dupn==sum){
        cout<<"It's a Armstrong Number!";
    }
    else{
        cout<<"It's not a Armstrong Number!";
    }
}
*/

//Divisor
/*
void divisor(int n){
    for(int i=1; i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }// time complexity is O(n)
}
*/
/*
void printDivisor(int n){
    vector <int> ls;
    //6*6 <= 36
    //7*7 <= 36   false 
    //O(sqrt(n))
    for(int i=1; i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if (n/i!=i){
                ls.push_back(n/i);
            }
        }
    }

    // O(no of factors *log(no of factors) ):n is the number of factor 
    sort(ls.begin(),ls.end());
    //O(number of factors)
    for(auto it : ls)cout<< it<<" ";

}


int main() {
    int n;
    cin>>n;
    printDivisor(n);
}*/

//check prime 
/*
int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i) cnt++;
        }
    }
    if(cnt ==2 )  cout << "true ";
    else cout <<"false";
}
*/

//GCD Time complexity O(log base @ (m(a,b)))
//Euclidean Algorithm
/*
int gcd(int a, int b){
    while (a>0 && b>0){
        if(a>b) a= a%b;
        else b= b%a;

    }
    if(a==0) return b;
    return a;
}

int main(){
    int a,b;
    cin >>a>>b;
  int gcdno=  gcd(a,b);
  cout<<gcdno<<" ";
}*/ 
