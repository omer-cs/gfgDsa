#include<bits/stdc++.h>
#define endl '\n'
#define d 256
using namespace std;

const int q = 101;

void RBSearch(string txt, string pat) {
  int n = txt.length();
  int m = pat.length();

  //  compute d^(m-1)
  int h = 1;
  for(int i=0; i<m-1; ++i)
    h=(h*d)%q;

  //  computer p and t
  int p=0, t=0;
  for(int i=0; i<m; ++i) {
    p = (p*d+pat[i])%q;
    t = (t*d+txt[i])%q;
  }

  for(int i=0; i<=n-m; i++) {
    //  check for hit
    if(p==t) {
      bool flag = true;
      for(int j=0; j<m; j++) {  // comparing each element of txt's hash and pat's hash window
        if(txt[i+j] != pat[j]) {
          flag = false;
          break;
        }
      }
      if(flag) {
        cout<<i<<" ";
      }
    }
    //  computing ti+1 using ti
    if(i<n-m) {
      t = ((d*(t-txt[i]*h))+txt[i+m])%q;
    }
    if(t<0) {
      t+=q;
    }
  }
  cout<<endl;
}

int main() {
  string text, pat;
  cin>>text>>pat;

  RBSearch(text, pat);
  return 0;
}