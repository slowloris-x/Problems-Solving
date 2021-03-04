#include <iostream>

using namespace std;

typedef unsigned long long int ll;


int main(){

ll y,x,n;
cin >> n;

for(ll i = 0; i<n; i++){

cin >> y >> x;

if(x > y){

if(x%2 == 0){
cout << (x-1)*(x-1) + y;

}else{

cout << x*x-y+1;

}


}else{

if(y%2 == 0){
cout << y*y-x+1;

}else{
cout << (y-1)*(y-1) + x;
}


}
cout << endl;
}

}
