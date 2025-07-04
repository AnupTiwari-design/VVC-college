i="apple"

dist={}
print(dist)

print(dist.get(i,0))

dist['age']=24
print(dist)

j='age'
dist[j]=dist.get(j,0)+1
print(dist)

