# unlabled nodes
---
>>T(3)=5\
>>T(4)=+7=14 
---
# *catalon formula*
## TO calculate the number of binary tree for given node
## T(n)=2nCn/n+1

> nCr=n!/r!*(n-r)!
> ## T(n)=2n!/n!* n!*(n-1)
 ---
 # labed nodes
 ## for labed nodes the number of binary tree con be formed by given nodes
 > T(n)=n!;
---
 # Height
 ##  for given height the minmum node
 N=h+1\
 N-1=h
 ## for given height the maximum node
 > gp serise
 > N=2^h+1 -1\
 >N+1=2^h+1
 ###  log2(N+1)-1=h
---

 # relasionship between  internal node and leaf node 
 ## *(leaf node= internal node+1)*

# strict binary tree
## calculating node from height
### min nodes=2h+1
### max nodes=2^(h+1)-1
## calculating height from nodes
### min height= log2(n+1)-1
### max height= (n-1)/2

