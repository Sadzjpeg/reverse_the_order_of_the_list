#include <iostream>
using namespace std;
int main() {
  int n,i,b;
  cout<<"unesite duzinu niza\n";
  cin>>n;
  int niz[n];
  cout<<"unesite clanove niza\n";
  for(i=0;i<n;i++){
    cin>>b;
    niz[i]=b;
  }
  cout<<"ovako izgleda niz u obrnutom redoslijedu\n";
  for(i=n-1;i>=0;i--){
    cout<<niz[i];
  }
  return 0;
}
