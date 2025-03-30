def find_median():
    arr = [7, 1, 3, 5, 4]
    sorted_arr = []
    for num in arr:
        inserted = False
        for i in range(len(sorted_arr)):
            if num < sorted_arr[i]:
                sorted_arr.insert(i, num)
                inserted = True
                break
        if not inserted:
            sorted_arr.append(num)
    n = len(sorted_arr)
    if n % 2 == 0:
        return (sorted_arr[n // 2 - 1] + sorted_arr[n // 2]) / 2
    else:
        return sorted_arr[n // 2]