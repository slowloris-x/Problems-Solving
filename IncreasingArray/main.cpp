#include <iostream>

typedef long long int ll;
using namespace std;

int main(){

ll n,a;
ll ans = 0;
ll b = 0;
cin >> n;

for(ll i = 0; i < n; i++){
cin >> a;

if(a < b){
ans += b - a;
}else{
b=a;
}

}
cout << ans << endl;


}

