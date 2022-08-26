A = [4, 2, 1, 3]
N = 4
A.sort()
res = 1
for i in range(1,N):
    sum = 0
    for j in range(0,i):
        sum += A[j]
    if(A[i]>=sum):
        res += 1
print(res)