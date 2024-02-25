
n=int(input("enter a number"))
rev=1
count=0
temp=n
while(n!=0):
    rem=n%10
    count=count+1
    n=n//10
rev=(count*10)+(temp%10)
print(rev)
# write a python prog to input the sentence find out the word in the sentence homework
