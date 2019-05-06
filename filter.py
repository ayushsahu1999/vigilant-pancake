# Filter Functions in Python

mylist = [1, 2, 3, 4, 5]

odds = list(filter((lambda x: x%2), mylist))

print (odds)

mylist1 = [1, -2, -3, -4, 5]

pos = list(filter((lambda x: x>0), mylist1))

print (pos)
