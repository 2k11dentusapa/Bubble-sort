arr = [1, 6, 36, 322, 26, 34, 3456, 63, 7777, 5, 44734563, 6775675, 334, 3556, 3, 43556, 4355456, 435, 4] # Có thể thay mảng thành mảng của bạn 
n = len(arr)
for i in range(n):
    for t in range(0, n - i - 1):
        if arr[t] > arr[t + 1]:
            c = arr[t]
            arr[t] = arr[t + 1]
            arr[t + 1] = c
for r in arr:
    print(r)
