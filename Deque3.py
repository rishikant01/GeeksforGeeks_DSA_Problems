from collections import deque

d=deque([10,20,30,40,50])

print(d)
d.rotate(2)
print("\nRoatate clockwise by 2 :")
print(d)
d.rotate(-1)
print("\nRoatate counterkwise by -1 :")
print(d)
d.reverse()
print("\nReversing :")
print(d)
