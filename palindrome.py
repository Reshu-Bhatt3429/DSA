#Check if a number is a palindrome
def is_number_palindrome():
    num = 121
    str_num = str(num)
    return str_num == str_num[::-1]