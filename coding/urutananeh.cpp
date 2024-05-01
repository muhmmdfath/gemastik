#include <iostream>
#include <algorithm>
using namespace std;

main(){
    int n;
    cin>>n;
    cout<<endl;
    int xi[n];

    for(int i=0; i<n; i++){
        cin>>xi[i];
    }
    cout<<endl;
    int len_x = sizeof(xi)/sizeof(xi[0]);
    sort(xi, xi+len_x);

     for(int j=0; j<=n; j++){
        for(int k=0; k<n; k++){
            if(xi[k]%10==j){
                cout << xi[k] << endl;
            }
        }
    }
}
