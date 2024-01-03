def isBalanced(s):
    stack=[]
    for x in s:
        if x in ("(","[","{"):
            stack.append(x)
        else:
            if not stack:
                return False
            elif isMatch(stack[-1],x)== False:
                return False
            else:
                stack.pop()
    if stack:
        return False
    else:
        return True
def isMatch(a,b):
    if ( a =='(' and b==')') or ( a =='{' and b=='}') or ( a =='[' and b==']'):
        return True
    else:
        return False
    
for _  in range(int(input())):
    s=str(input())
    res=isBalanced(s)
    print(res)

    
