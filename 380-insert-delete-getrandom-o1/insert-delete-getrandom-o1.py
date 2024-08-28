import random

class RandomizedSet:

    def __init__(self):
        self.data = []
        self.index = {}
    def insert(self, val: int) -> bool:
        if val not in self.index:
            self.data.append(val)
            self.index[val] = len(self.data) - 1
            return True
        else:
            return False
    def remove(self, val: int) -> bool:
        if val in self.index:
            ind = self.index[val]

            self.data[ind] = self.data[-1]
            self.index[self.data[-1]] = ind
            self.data.pop()
            del self.index[val]
            return True
        else:
            return False
    def getRandom(self) -> int:
        return random.choice(self.data)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()