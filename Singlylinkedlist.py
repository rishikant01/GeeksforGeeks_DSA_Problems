class node:
    def __init__(self,key):
        self.key=key
        self.next=None
#INSERTION CODE
def insertbegin(head,key):
    temp=node(key)
    temp.next=head
    return temp

def printList(head):
    curr = head
    while curr!= None:
        print(curr.key)
        curr = curr.next
def insertatpos(head,x,y):
    temp=node(y)
    if x==1:
        temp.next=head
        return head
    curr=head
    for i in range(x-2):
        curr=curr.next
        if curr==None:
            return head
    temp.next=curr.next
    curr.next=temp
    return head
#INSERTION at last CODE
def insertlast(head,key):
    curr=head
    while curr.next!=None: #VVVVVIMP
        curr=curr.next
    curr.next=node(key)
    return head
def insertatmid(head,node):
    temp=node(node)
    curr=head
    cntr=0
    while curr!=None:
        cntr=cntr+1
        curr=curr.next
    curr=head
    for i in range(cntr//2):
        curr=curr.next
    temp.next=curr.next
    curr.next=temp
    print(temp)
    print(temp.data)
    return head
def delnthnode(head,pos):
    curr=head
    cntr=0
    while curr.next!=head:
        cntr=cntr+1
        curr=curr.next
    if cntr<pos:
        return head
    elif head==None:
        return None
    else:
        curr=head
        for i in range(pos-2):
            curr=curr.next
        curr.next=curr.next.next

    return head
def dellast(head):
    if head==None:
        return None
    if head.next==None:
        return None
    curr=head
    while curr.next.next!=None:
        curr=curr.next
    curr.next=None
    return head
def nthnode(head,n):
    cntr=0
    curr=head
    while curr!=None:
        curr=curr.next
        cntr=cntr+1
    if cntr<n:
        return
    curr=head
    for i in range(1,cntr-n+1):
        curr=curr.next
    return curr.data
def midnode(head):
    if head==None:
        return head
    cntr=0
    curr=head
    while curr!=None:
        curr=curr.next
        cntr=cntr+1
    curr=head
    for i in range(cntr//2):
        curr=curr.next
    return curr.data
def removedups(head):
    curr=head
    while curr!=None and curr.next!=None:
        if curr.data==curr.next.data:
            curr.next=curr.next.next
        else:
            curr=curr.next
    return head
def delete(pointer):#deleting last node with pointer given
    temp=pointer.next
    pointer.key=temp.key
    pointer.next=temp.next
def deltail(head):
    curr=head
    while curr.next.next!=head:
        curr=curr.next
    curr.next=head
    return head
def delpos(head,pos):
    curr=head
    for i in range(pos-1):
        curr=curr.next
    temp=curr
    curr=head
    while curr!=None and curr.next!=None:
        if curr==temp:
            curr.next=curr.next.next
        curr=curr.next
    return head
def delhead(head):
    if head==None:
        return None
    if head.next==None:
        return None
    new_head=head.next

    return new_head
def sortedInsert(head, x):
    temp = node(x)

    if head == None:
        return temp
    elif x < head.key:
        temp.next = head
        return temp
    else:
        curr = head

        while curr.next != None and curr.next.key < x:
            curr = curr.next

        temp.next = curr.next
        curr.next = temp
        return head
def reverselist1(head): #using stacks 
    stack=[]
    curr=head
    while curr!=None:
        stack.append(curr.data)
        curr=curr.next
    curr=head
    while curr!=None:
        curr.data=stack.pop()
        curr=curr.next
    return head
def reverselist2(head):  #efficent method
    curr = head
    prev = None

    while curr is not None:
        next = curr.next
        curr.next = prev
        prev = curr
        curr = next

    return prev
#seacrh in linked list
def searchLinkedList(head,x):
    curr=head
    if head.data==x:
        return True
    if head==None:
        return False
    while curr!=None:
        if curr.data==x:
            return True
        curr=curr.next
 #Given a singly linked list of integers. The task is to display the linked list.

class node:
    def __init__(self,key):
        self.key=key
        self.next=None
def displaylist(head):
    curr=head
    while curr!=None:
        print(curr.key,end=" ")
        curr=curr.next
    return head
head = node(10)
head.next = node(20)
head.next.next = node(15)
head.next.next.next = node(30)
displaylist(head)
   


head = node(10)
head.next = node(20)
head.next.next = node(15)
head.next.next.next = node(30)
head=insertbegin(head,5)
printList(head)
x=int(input("Enter the position: " ))
y=int(input("Enter the data to be entered: "))
head=insertatpos(head,x,y)
printList(head)
head=insertlast(head,500)
printList(head)
#drivercodei 
arr=list(map(int,input("Enter nodes of list : ").split()))
head=node(arr[0])
curr=head
for i in range(1,len(arr)):
    curr.next=node(arr[i])
    curr=curr.next
print("Before")
printList(head)
insertatmid(head,3)
print("\n")
printList(head)


