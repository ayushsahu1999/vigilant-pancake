# Reduce Functions in Python

mylist = [1, 2, 3, 4, 5]

prod = reduce((lambda x, y: x*y), mylist)

print (prod)
