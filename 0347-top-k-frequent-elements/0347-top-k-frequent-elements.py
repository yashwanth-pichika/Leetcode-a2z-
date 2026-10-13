class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        dist={}

        for i in nums:
            dist[i]=dist.get(i,0)+1
        res=[]

        for i in range(k):
            n=max(dist,key=dist.get)
            res.append(n)
            del dist[n]
        return res
