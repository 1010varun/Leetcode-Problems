class Solution:
    def isValid(self, s: str) -> bool:
        pair = {
            "{":"}",
            "(":")",
            "[":"]"
        }
        stack = []
        top = -1
        for i in s :
            if(top == -1 and (i == "]" or i == ")" or i == "}")) :
                return False

            elif(i == "(" or i == "{" or i == "[") :
                stack.append(i)
                top += 1

            else :
                if(pair[stack[top]] == i) :
                    stack.pop(top)
                    top -= 1
                else :
                    return False

        if(len(stack)):
            return False
        return True