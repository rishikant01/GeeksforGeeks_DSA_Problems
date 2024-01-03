from collections import deque

d=deque([10,20,30,40]) #initialized with a list having some elements
print(d)
d.insert(2,10)
print(d)
print("Count of element 10 : ",d.count(10))

d.remove(10)
print(d)

d.extend([50,60])
print(d)
d.extendleft([15,25])
print(d)
