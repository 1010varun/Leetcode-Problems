class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        if(len(tokens) == 1) :
            return int(tokens.pop())
        stack = []
        top = -1
        for i in tokens :
            # print(stack)
            if(i != "+" and i != "-" and i != "/" and i != "*") :
                stack.append(i)
                top += 1
            else :
                op2 = int(stack.pop())
                op1 = int(stack.pop())
                if(i == "+") :
                    res = op1 + op2
                elif(i == "-") :
                    res = op1 - op2
                elif(i == "*") :
                    res = op1 * op2
                elif(i == "/") :
                    if(op2 >0 and op1 >=0) :
                        res = op1 // op2
                    elif(op2 < 0 and op1 > 0) :
                        op2 *= -1
                        res = op1 // op2
                        res *= -1
                    elif(op2 > 0 and op1 < 0 ) :
                        op1*= -1
                        res = op1 // op2
                        res *= -1
                    elif(op2 < 0 and op1 < 0) :
                        op1 *= -1
                        op2 *= -1
                        res = op1 // op2
                stack.append(res)
                top -= 1
        # print(stack)
        return stack.pop()