class Solution:
    def maximumSwap(self, num: int) -> int:
        l = []
        a = []
        b = num
        while(num!=0):
            l.append(num%10)
            a.append(num%10)
            num//=10
        a.sort()
        a = a[::-1]
        l = l[::-1]
        ma = len(l)
        s = ""
        if l==a:return b
        x = True
        # for i in range(len(l)):
        #     if x==False:
        #         break
        while ma!=0 and x==True:
            print(l)
            m = max(l)
            n = ma-1-l[::-1].index(m)
            print(n,m)
            if l[0]!=m and x==True:
                l[0],l[n]=l[n],l[0]
                x = False            #len(test_list) - 1 - test_list[::-1].index('e')
            else:
                s+=str(l[0])
                l.pop(0)
                ma-=1
        for i in l:
            s+=str(i)
        return int(s)
            