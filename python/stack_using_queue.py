class MyStack:
    def __init__(self):
        self.q = list()

    def push(self , x):
        size = len(self.q)
        self.q.append(x)
        for i in range(size):
            self.q.append(self.q.pop(0))

    def pop(self ):
        return self.q.pop(0)
    
    def top(self):
        return self.q[0]

    def empty(self):
        return True if len(self.q)==0 else False