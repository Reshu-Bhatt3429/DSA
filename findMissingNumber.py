def find_missing_number_brute_force(nums):
    n = len(nums)


    for i in range(n + 1):
        found = False


        for num in nums:
            if num == i:
                found = True
                break


        if not found:
            return i



nums = [3, 0, 1]
missing_number = find_missing_number_brute_force(nums)
print("The missing number is:", missing_number)