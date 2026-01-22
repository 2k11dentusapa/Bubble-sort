    public static void main(String[] args) {
      int[] x = {1, 6, 36, 322, 26, 34, 3456, 63, 7777,5, 44734563, 6775675, 334, 3556, 3, 43556 , 4355456, 435, 4}; /* có thể thay mảng thành mảng của bạn */
      for (int i=0; i<x.length; i++) {
        for (int t=0; t<x.length - 1; t++) {
          int c;
          if (x[t] > x[t+1]) {
            c = x[t+1];
            x[t+1] = x[t];
            x[t] = c;
          }
        }
      }
      for (int y= 0; y<x.length; y++) {
        System.out.println(x[y]);
      }
    }
