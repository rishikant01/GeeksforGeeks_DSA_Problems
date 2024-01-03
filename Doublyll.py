class Node:
    def __init__(self,data):
        self.data=data
        self.prev=None
        self.next=None
def insertbegin(head,data):#INSERTION AT BEGIN
    temp=Node(data)
    if head==None:
        return temp
    head.prev=temp
    temp.next=head
    temp.prev=None
    return temp
def insertend(head,data):#INSERTION AT END
    temp=Node(data)
    if head==None:
        return temp
    curr=head
    while curr.next!=None:
        curr=curr.next
    curr.next=temp
    temp.prev=curr
    temp.next=None
    return head
def delhead(head):
    if head==None:
        return None
    elif head.next==None:
        return None
    else:
        head=head.next
        head.prev=None
        return head
def deltail(head):
    if head==None:
        return None
    elif head.next==None:
        return None
    else:
        curr=head
        while curr.next.next!=None:
            curr=curr.next
        curr.next=None
        return head
def reverselist(head):
    if head==None:
        return None
    elif head.next==None:
        return head
    
    curr=head
    prev=None
    while curr!=None:
        prev=curr
        curr.next,curr.prev=curr.prev,curr.next
        curr=curr.next
    return prev
def printDL(head):
    curr=head
    while curr!=None:
        print(curr.data,end=' ')
        curr=curr.next
    print()
#DRIVER CODE
head=None
head=insertbegin(head,10)
#printDL(head)
head=insertbegin(head,20)
#printDL(head)
head=insertbegin(head,30)
printDL(head)
#head=insertend(head,10)
# printDL(head)
# head=insertend(head,20)
# printDL(head)
# head=insertend(head,30)
# printDL(head)
# head=delhead(head)
# printDL(head)
# head=delhead(head)
# printDL(head)
# head=delhead(head)
# printDL(head)
# head=delhead(head)
# printDL(head)
# head=delhead(head)
# printDL(head)
# head=deltail(head)
# printDL(head)
head=reverselist(head)
printDL(head)