#stacks using arrays
stackmax=100000
stack=[-1]*100000
top=-1
def push(data):
    global stack
    global top
    if top == 10000:
        print("Stack Full")
        print("Stack Overflow")
    else:
        top+=1
        stack[top]=data
def pop():
    global stack
    global top
    if top==-1:
        print("Stack Empty")
        print("Stack Underflow")
    else:
        stack[top]=-1
        top-=1
def display():
    global stack
    global top
    if top==-1:
        print(-1)
    else:
        i=0
        while i<=top:
            print(stack[i],end=" ")
            i+=1
        print("")
def main():
    push(4)
    push(6)
    push(8)
    display()
    pop()
    pop()
    display()
    pop()
    pop()
    display()

if __name__=="__main__":
    main()
