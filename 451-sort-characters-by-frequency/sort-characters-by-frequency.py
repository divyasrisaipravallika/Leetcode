class Solution:
    def frequencySort(self, s: str) -> str:
        d = {}
        for i in s:
            if i not in d:
                d[i] = 1
            else:
                d[i]+=1
        dic = dict(sorted(d.items(),key=operator.itemgetter(1)))
        a = ""
        for i in dic:
            while(d[i]!=0):
                a+=i
                d[i]-=1
        return a[::-1]