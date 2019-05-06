# Map Functions in Python

mylist = [1, 2, 3, 4, 5]

# Convert each element to float value
mylist = list(map(float, mylist))

print (mylist)

mylist = list(map(lambda x: x**2, mylist))

print (mylist)
