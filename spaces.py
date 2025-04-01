def count_spaces():
    s = "hello world this is python"
    count = 0
    for char in s:
        if char == " ":
            count += 1
    return count