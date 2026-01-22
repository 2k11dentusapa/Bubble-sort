#include <iostream>
#include <array>
using namespace std;

int main() {
int x[] = {1, 6, 36, 322, 26, 34, 3456, 63, 7777,5, 44734563, 6775675, 334, 3556, 3, 43556 , 4355456, 435, 4}; /* có thể thay mảng thành mảng của bạn */
int n = size(x);
int c;
for (int i=0; i< n; i++) {
  for (int t=0; t< n-1; t++) {
    if (x[t] > x[t+1]) {
      c = x[t+1];
      x[t+1] = x[t];
      x[t] = c;
    }
  }
}
for (int m = 0; m<n; m++) {
  cout<<x[m]<<endl;
}
return 0;
}

/* Mã nguồn được viết và lưu trên GitHub vào lúc 2026/01/22 20:46:00 */
