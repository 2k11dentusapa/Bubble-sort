const arr = new Array(1, 6, 36, 322, 26, 34, 3456, 63, 7777, 5, 44734563, 6775675, 334, 3556, 3, 43556, 4355456, 435, 4); /* Có thể thay mảng thành mảng của bạn */
let c;
for (let i=0; i< arr.length; i++) {
  for (let t=0; t< arr.length; t++) {
    if (arr[t] > arr[t+1]) {
      c = arr[t+1];
      arr[t+1] = arr[t];
      arr[t] = c;
    }
  }
}
for (let n= 0; n< arr.length; n++) {
  console.log(arr[n]);
}
