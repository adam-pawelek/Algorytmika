class Node:
    def __init__(self, data = None):
        self.data = data
        self.lessNode = None
        self.moreNode = None

class BstTree:
    def __init__(self):
        self.head = None

    def addNode(self,data):
        helpNode = self.head
        if (self.head == None):
            self.head = Node(data)
            return 
        wasAdd = 0
        while (wasAdd == 0):
            if (data < helpNode.data):
                if(helpNode.lessNode == None):
                    helpNode.lessNode = Node(data)
                    wasAdd = 1
                else:
                    helpNode = helpNode.lessNode
            else:
                if(helpNode.moreNode == None):
                    helpNode.moreNode = Node(data)
                    wasAdd = 1
                else:
                    helpNode = helpNode.moreNode


    def printDfs(self):
        if (self.head == None):
            print("Create Tree first")
        else:
            self.forPrintDfs(self.head)

    def forPrintDfs(self,myNode):
        print(myNode.data)
        if (myNode.lessNode != None):
            self.forPrintDfs(myNode.lessNode)
        if(myNode.moreNode != None):
            self.forPrintDfs(myNode.moreNode)


myTree = BstTree()

myTree.addNode(1)
myTree.addNode(2)
myTree.addNode(0)

myTree.printDfs()
