#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while (tc--){
        int x,y,k;
        cin>>x>>y>>k;

        int time_to_key = abs(x - y);
        int smallest_time = time_to_key + min(time_to_key, k);
        cout << smallest_time << endl;
    }

    return 0;
}