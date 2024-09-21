class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        ans = []
        for i in range(1,n+1):
            ans.append(str(i))
        ans.sort()
        a = []
        for i in range(len(ans)):
            a.append(int(ans[i]))
        return a