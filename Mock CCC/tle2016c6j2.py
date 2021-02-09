arr=input().split()
a,n,tot=int(arr[0]),int(arr[1]),0
flowers=[]
for j in range(a):
    flowers.append(int(input()))
flowers.sort()
i=n-1
j=1
while i>=0:
    tot+=flowers[i]**j
    i-=1
    j+=1
print(tot%1000000007)
