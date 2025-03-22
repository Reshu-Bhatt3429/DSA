
#I need to reverse an array, how is array implemented in Python?

myList = [1,2,3,45,6,2,3]

print(f'Original string is: {myList}')

emptyList = []

while myList:
    element = myList.pop()
    emptyList.append(element)


print(f'The reverse string will be: {emptyList}')