#Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. 
#Find the missing element.
def missingNumber(array,n):
    for i in range(1,n+1):
        if i not in array:
            return i 
        
def optimized_missingNumber(array,n):
    actual_sum=(n*(n+1))/2
    given_sum=sum(array) 
    return int(actual_sum - given_sum)
#testcase1       
array=[1,2,3,5]
n=5
print(missingNumber(array,n))
print(optimized_missingNumber(array,n))

#testcase2
array = [6,1,2,8,3,4,7,10,5]
n=10
print(missingNumber(array,n))
print(optimized_missingNumber(array,n))