#include <iostream>
#include <vector>
typedef long long int ll;


using namespace std;

int main(){

ll n;
cin >> n;
vector<ll> hold(n);
if(n < 4 && n != 1){

cout << "NO SOLUTION" << endl;
}else{
ll left = 0;
ll right = n/2;
for (ll i = 1; i <= n; i++){
if(i%2 == 0){
hold[left] = i;
left++;
}else{

hold[right] = i;
right++;
}


}

for(ll i = 0; i < n; i++){

cout << hold[i] << " ";
}
cout << endl;
}

}


