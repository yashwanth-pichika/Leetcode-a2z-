class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        dist={}

        for i in strs:
            key=tuple(sorted(i))
            if key in dist:
                dist[key].append(i)
            else:
                dist[key]=[i]
        

        return list(dist.values())