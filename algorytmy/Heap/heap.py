class Heap:
    def __init__(self):
        self.heap = [None]

    def biggestNumber(self):
        try:
            return self.heap[1]
        except:
            return "Not Working"

    def add(self,data):
        self.heap.append(data)
        myPosition = len(self.heap) - 1
        while(myPosition != 1 and self.heap[myPosition // 2] < self.heap[myPosition]):
            tem = self.heap[myPosition]
            self.heap[myPosition] = self.heap[myPosition // 2]
            self.heap[myPosition // 2] = tem
            myPosition = myPosition // 2

    def removeBiggest(self):
        self.heap[1] = self.heap[len(self.heap) - 1]
        self.heap.pop()
        myPosition = 1
        wasChange = 1
        while (wasChange > 0):
            wasChange = 0
            if (myPosition * 2 < len(self.heap) - 1 and  self.heap[myPosition] < self.heap[myPosition * 2]):
                tem = self.heap[myPosition]
                self.heap[myPosition] = self.heap[myPosition * 2]
                self.heap[myPosition * 2] = tem
                wasChange =1
            if (myPosition * 2 + 1 < len(self.heap) - 1 and self.heap[myPosition] < self.heap[myPosition * 2 + 1]):
                tem = self.heap[myPosition]
                self.heap[myPosition] = self.heap[myPosition * 2 + 1]
                self.heap[myPosition * 2 + 1] = tem
                wasChange = 2

            if (wasChange ==1):
                myPosition =  myPosition * 2
            if (wasChange == 2):
                myPosition = myPosition * 2 + 1





myHeap = Heap()

myHeap.add(1)
myHeap.add(2)
myHeap.add(3)
myHeap.add(4)


print(myHeap.biggestNumber())

myHeap.removeBiggest()

print(myHeap.biggestNumber())

