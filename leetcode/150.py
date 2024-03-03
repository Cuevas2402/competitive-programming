class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for i in tokens:
            if i in ['+', '-', '*', '/']:
                n1 : int = int(stack.pop())
                n2 : int = int(stack.pop())

                if i == '+':
                    stack.append(n2+n1)
                elif i == '-':
                    stack.append(n2-n1)
                elif i == '*':
                    stack.append(n2*n1)
                elif i == '/':
                    stack.append(n2/n1)

            else:
                stack.append(i)
        return int(stack.pop())
