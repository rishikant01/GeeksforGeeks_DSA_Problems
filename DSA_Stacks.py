#STACK IMPLEMENTATION USING LINNKED LIST
class Node:
    def __init__(stack,data):
        stack.data=data
        stack.next=None
class Stack:
    def __init__(stack):
        stack.head=None
    
    def isempty(stack):
        if stack.head== None:
            return True
        else:
            return False
    def push(stack,data):
        temp=Node(data)
        if stack.head==None:
            stack.head=temp
        else:
            temp.next=stack.head
            stack.head=temp
    def pop(stack):
        if stack.isempty():
            return None
        else:
            temp=stack.head
            stack.head=stack.head.next
            temp.next=None
        return temp.data
    def peek(stack):
        if stack.isempty():
            return None
        else:
            return stack.head.data
    def display(stack):
        if stack.isempty():
            print ("Stack Underflow")
        else:
            curr=stack.head
            while curr!=None:
                print(curr.data,end=' ')
                curr=curr.next
                if(curr != None):
                    print(" -> ", end = "")
        return 
    
def insertintostack(n,arr):
    for x in arr:
        Stack.push(x)

##Driver code (stacks using linked list)
if __name__=="__main__":
    Stack = Stack()
    
    Stack.push(10)
    Stack.push(20)
    Stack.push(30)
    Stack.push(40)
    Stack.push(50)
    print("Top element is " ,Stack.peek())
    Stack.display()
    print("\n")
    Stack.pop()
    print("Top element is " ,Stack.peek())
    Stack.display()
    n=5
    arr=[5,4,3,2,1]
    insertintostack(n,arr)
    Stack.display()
