for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    b=[1,2,3,4,5,6,7]
    cntr=0
    for x in arr:
        if x in b:
            b.remove(x)
        cntr=cntr+1
        if b==[]:
            break
    print(cntr)
    