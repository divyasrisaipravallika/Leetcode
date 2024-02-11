class Solution:
    def subarraySum(self, l: List[int], k: int) -> int:
        c = 0
        m = 0
        d = {}
        for i in range(0,len(l)):
            m += l[i]
            if i==0 and m-k==0:
                c+=1
            elif m==k:
                c+=1
            if (m-k) in d:
                a = d[m-k]
                c+= len(a)
            if m not in d:
                y = []
                y.append(i)
                g = tuple((y))
                d[m]=g
            else:
                x = list(d[m])
                x.append(i)
                z = tuple((x))
                d[m] = z
        return c
