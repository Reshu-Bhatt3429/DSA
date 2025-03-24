#insert an integer it should return true if the integer
# is a palindrome false if not
from operator import truediv

userInput = int(input("Enter the integer of your choice: "))

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
