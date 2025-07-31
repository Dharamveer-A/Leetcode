# Last updated: 31/07/2025, 11:47:57
class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if rowIndex == 0 :
            return [1]
        elif rowIndex == 1 :
            return [1,1]
        lst=[[1],[1,1]]
        for i in range(1,rowIndex) :
            sol=[]
            for j in range(len(lst[i])-1):
                sol.append( lst[i][j] + lst[i][j+1] )
            lst.append([1]+sol+[1])
        return lst[rowIndex]