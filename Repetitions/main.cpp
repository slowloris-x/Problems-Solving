#include <iostream>

using namespace std;

int main(){

string s;
cin >> s;
int counter = 1;
int ans = 0;
for(int i =1; i < s.length();i++){
if(s[i] == s[i-1]){
	counter++;
}else{
if(counter > ans)
 ans = counter;
counter = 1;
}
}
if(counter > ans)
	ans = counter;
cout << ans << endl;

}
