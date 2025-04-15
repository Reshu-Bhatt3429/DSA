#Linear Search
arr = [1,2,4,62,23,2]
target = 62
def linear_search(arr, target):

    for index in range(len(arr)):

        if arr[index] == target:
            return index
    return -1