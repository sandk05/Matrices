#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0; 
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for (int a_i = 0; a_i < n; a_i++)
        {
        //cout <<a[a_i][a_i] <<endl;
        sum1 += a[a_i][a_i];
        //cout <<a[a_i][n-1-a_i] <<endl;
        sum2 += a[a_i][n-1-a_i];
        }
    if(sum1 > sum2)
        {
        cout <<(sum1 - sum2) <<endl;        
    }else{
        cout <<(sum2 - sum1) <<endl;
    }
    
    return 0;
}
