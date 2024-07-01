class MinStack:

    def __init__(self):
        self.stack = []

    def push(self, val: int) -> None:
        self.stack.append(val)        

    def pop(self) -> None:
        if(self.stack) :
            self.stack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        minimum = self.stack[0]
        if(len(self.stack) == 1) :
            return minimum
        else :
            for i in self.stack :
                minimum = min(minimum, i)
        return minimum


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()