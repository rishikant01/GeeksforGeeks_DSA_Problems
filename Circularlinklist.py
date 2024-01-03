class node:
    def __init__(self,key):
        self.key=key
        self.next=None
def lencircular(head):
    curr=head
    cntr=1
    while curr.next!=head:
        cntr=cntr+1
        curr=curr.next
    return cntr
def iscircularlinklist(head):
    if head is None:
        return True

    slow = head
    fast = head.next

    while fast and fast.next:
        if slow == fast:
            return True
        slow = slow.next
        fast = fast.next.next
def insertbegin(head,data):
    temp=node(data)
    if head==None:
        return temp
    curr=head
    while curr.next!=head:
        curr=curr.next
    curr.next=temp
    temp.next=head 
    return temp
def insertbegin1(head,data):
    temp=node(data)
    temp.next=head.next
    head.next=temp
    temp1=temp.key
    temp.key=head.key
    head.key=temp1
    return head
def insertend(head,data):
    temp=node(data)
    if head==None:
        temp.next=temp
        return temp
    curr=head
    while curr.next!=head:
        curr=curr.next
    curr.next=temp
    temp.next=head 
    return head
def insertend1(head,data):
    temp=node(data)
    temp.next=head.next
    head.next=temp
    temp.key,head.key=head.key,temp.key
    return temp
def deletehead(head):#naiveapproach
    if head==None:
        return None
    elif head.next==head:
        return None
    curr=head
    while curr.next!=head:
        curr=curr.next
    curr.next=head.next
    return curr.next
def deletehead1(head):
    if head==None:
        return None
    elif head.next==head:
        return None
    else:
        head.key=head.next.key
        head.next=head.next.next

        return head
def printcircularList(head):
    if head==None:
        return
    print(head.key," ")
    curr = head.next
    while curr!= head:
        print(curr.key)
        curr = curr.next

head = node(10)
head.next = node(20)
head.next.next = node(15)
head.next.next.next = node(30)
head.next.next.next.next=head
printcircularList(head)
head=deletehead(head)
printcircularList(head)
print( )
head=deletehead1(head)
printcircularList(head)
ans=insertend1(head,5)
printcircularList(ans)
ans=insertbegin1(head,5)
printcircularList(ans)
len=lencircular(head)
print(len)
len=iscircularlinklist(head)
print(len)
