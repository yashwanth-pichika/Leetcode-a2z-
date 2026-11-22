class Solution:
    def checkString(self, s: str) -> bool:
        if 'b' not in s:
            return True
        seen=False

        for i in s:
            if seen and i=="a":
                return False
            if i=='b':
                seen =True

        return seen