

name = "sfskjim"
secondName = "tim"

#Why is "i" taking in numbers?
count = 0
for i in range(-1,-len(secondName)-1, -1):
    if secondName[i] == name[i]:
        count += 1
    else:
        print(False)
        break

if count == len(secondName):
    print(True)



