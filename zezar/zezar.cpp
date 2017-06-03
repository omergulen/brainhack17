// Solves "donKEY Kong" from the 2017 HSPC at UVa
// Solution by Aaron Bloomfield, 2017

#include <iostream>
#include <string>
using namespace std;
int main() {
  string a, b;
  unsigned int key, n;
  cin >> n;
  for ( unsigned int i = 0; i < n; i++ ) {
    cin >> a >> b;
    key = a[0]-b[0];
    if ( key >= 26 )
      key -= 26;
    if ( key < 0 )
      key += 26;
    cin >> a;
    cout << "Case " << (i+1) << ": ";
    for ( unsigned int j = 0; j < a.length(); j++ ) {
      char c = a[j];
      if ( (c >= 'A') && (c <= 'Z') ) {
	c -= key;
	if ( c < 'A' )
	  c += 26;
      }
      cout << c;
    }
    cout << endl;
  }
}
