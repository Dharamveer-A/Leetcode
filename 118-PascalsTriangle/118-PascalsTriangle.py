# Last updated: 07/08/2025, 19:32:32
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 0 :
            return []
        elif numRows == 1 :
            return [[1]]
        elif numRows == 2 :
            return [[1],[1,1]]
    
        lst = [[1],[1,1]]
        for i in range(1,numRows-1):
            sol = []
            for j in range(len(lst[i])-1):
                sol.append( (lst[i][j]) + lst[i][j+1])
            lst.append([1] + sol + [1])
        return lst
        

        