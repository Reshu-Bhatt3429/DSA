def find_subsets():
    arr = [1, 2, 3]
    subsets = [[]]
    for num in arr:
        new_subsets = []
        for subset in subsets:
            new_subset = subset + [num]
            new_subsets.append(new_subset)
        subsets.extend(new_subsets)
    return subsets