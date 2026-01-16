#include <iostream>
using namespace std;

void pattern7(int n){
for (int i=0; i<n;i++){
    //space
for(int j=0; j<n-i-1; j++){
    cout <<" ";

}
    //star
for( int j=0; j<2*i+1;j++){
cout<<"*";
}
    //space
    for(int i=0; i<n-i-1; i++){
        cout<<" ";
    }
    cout<<endl;
}
}

/*
   *  
  ***  
 *****  
*******  
*/


void pattern8(int n){
    for(int i=0; i<n; i++){

        //space
        for (int j=0; j<i; j++){
            cout<<" ";
        }

        //star
        for(int j=0; j<2*n - (2*i+1) ; j++){
            cout<<"*";
        }

        //space
        for(int j=0;j<i;j++){
            cout<<" ";
    }
    cout<<endl;
    }
}

/*
*******
 ***** 
  ***  
   *   
*/


/*
   *  
  ***  
 *****  
*******  
*******
 ***** 
  ***  
   *   
*/

void pattern10(int n){
    for(int i=1; i<=2*n-1;i++){
        int star=i;
        if(i>n) star= 2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
/*

*
**
***
****
***
**
*

*/

void pattern11(int n){
    int start=1;
for(int i=0;i<n;i++){
    if(i%2==0) start =1;
    else start=0;
    for(int j=0; j<=i; j++){
        cout<<start;
        start = 1- start;
    }
    cout<<endl;
}
}
/*
1
01
101
0101 
*/ 
  
void pattern12(int n){
    int space= 2*(n-1);

    for(int i=1; i<=n;i++){
        //number 
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        //number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}
/*
1      1
12    21
123  321
12344321
*/

void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
/*
1
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/

void pattern14(int n){
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F
*/

void pattern15(int n){
    for(int i=0; i<=n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
/*
A B C D E 
A B C D 
A B C 
A B 
A 

*/
void pattern16(int n){
    
    for (int i=0;i<=n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        
    }
}
/*
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 
*/

void pattern17(int n){

for (int i=0; i<n;i++){

    //space
for(int j=0; j<n-i-1; j++){
    cout <<" ";

}

  //char
  char ch='A';
  int Break=(2*i+1)/2;
  for(int j=1; j<=2*i+1;j++){
      cout<<ch;
      if(j<=Break) ch++;
      else ch--;
  }

    //space
    for(int i=0; i<n-i-1; i++){
        cout<<" ";
    }
    cout<<endl;
}
}
/*
    A  
   ABA  
  ABCBA  
 ABCDCBA  
ABCDEDCBA 
*/

void pattern18(int n){

    for(int i=0; i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }

        cout <<endl;

    }

}
/*
E 
D E 
C D E 
B C D E 
A B C D E
*/

void pattern19(int n){
    int iniS=0;
    for(int i=0;i<n;i++){
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }
     iniS=2*n-2;
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;
    }
}
/*
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/

void pattern20(int n){

    int space= 2*n-2;
    for(int i=1; i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }

        //spaces
        for(int j=1;j<=space;j++){
            cout<<" ";

        }

        //stars 
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space-=2;
        else space+=2;

    }
}
/*
*      *
**    **
***  ***
********
***  ***
**    **
*      *
*/

void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout <<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
/*
*****
*   *
*   *
*   *
*****
*/

void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right= (2*n-2)-j;
            int bottom= (2*n-2)-i;
            cout<<(n-min(min(top, bottom), min(left, right)));
        }
        cout<<endl;
    }
}
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

int main() {
    int n;
    cin>>n;
  //  pattern7(n); pattern9
    pattern21(n);
}
