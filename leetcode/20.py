class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        p = {')':'(', ']':'[', '}':'{' }
        for i in s:
            if i in ['(', '[', '{']:
                stack.append(i)
            else:
                if len(stack) == 0:
                    return False
                else:
                    if stack[-1] != p[i]:
                        return False
                    else:
                        stack.pop()
        if len(stack) > 0:
            return False
        else:
            return True