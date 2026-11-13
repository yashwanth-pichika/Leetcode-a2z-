class Solution:
    def pub(self, n:int, k:int, i:int,sub:list[int],res:list[list[int]]):
        if len(sub)==k:
            res.append(sub.copy())
            return
        if i>n:
            return

        sub.append(i)

        self.pub(n,k,i+1,sub,res)
        sub.pop()
        self.pub(n,k,i+1,sub,res)
        
    def combine(self, n: int, k: int) -> list[list[int]]:
        sub=[]
        res=[]
        self.pub(n,k,1,sub,res)
        return res
        