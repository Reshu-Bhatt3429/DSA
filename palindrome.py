#insert an integer it should return true if the integer
# is a palindrome false if not
from operator import truediv

userInput = int(input("Enter the integer of your choice: "))
#str() converts the int into str
# map creates an iterable like 123 will be treated as 1,2,4 individually
convert = list(str(userInput))



emptyList = []

while len(convert)>0:
    poppedItem = convert.pop()
    emptyList.append(poppedItem)

newInteger = ''.join(emptyList)
print(newInteger)

if newInteger == str(userInput):
    print(True)
else:
    print(False)