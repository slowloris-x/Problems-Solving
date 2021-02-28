#include <iostream>

using namespace std;


int main(){
int n,elements;

cin >> n;

int ans = n;

for(int i = 1; i < n; i++){
cin >> elements;
ans = ans + i - elements;
}
cout << ans << endl;




}
