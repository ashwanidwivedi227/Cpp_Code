from itertools import combinations
a=[i for i in input().split(",")]
b=input()
b=b.lower()
b1=[]
x=len(b)
op=[]
def all_subsequences(s):
    out=set()
    for r in range(1,len(s)+1):
        for c in combinations(s,r):
            out.add("".join(c))#to checklo
    return sorted(out)
out=all_subsequences(b)
for i in range(len(b)):
    b=b[1:]+b[0]
    b1.append(b)
for k in out:
    for e in range(len(k)):
        k=k[1:]+k[0]
        b1.append(k)
b1=set(b1)
b1=list(b1)
for i in a:
    t=i.lower()
    for j in b1:
        if t==j.lower():
            op.append(i)
if len(op)==0:
    print(-1)
else:
    print(*op,sep=",")
            