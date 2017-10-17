//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <cmath>

using namespace std;

double x[2005];
double y[2005];
int xx=0, yy=0;
long double c=9999999999;
int n;

int main() {
    
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x[i]>>y[i];
    }
    
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            long double dist = sqrt(abs(x[i]-x[j])*abs(x[i]-x[j])+abs(y[i]-y[j])*abs(y[i]-y[j]));
            if(dist<c){
                c=dist;
                xx=i;
                yy=j;
            }
        }
    }
    
    cout << xx << " " << yy << endl;
    
    return 0;
}
