def searchMatrix(matrix, target):
    if not matrix or not matrix[0]:
        return False
    
    m, n = len(matrix), len(matrix[0])
    
    row, col = 0, n - 1  # start from top-right
    
    while row < m and col >= 0:
        val = matrix[row][col]
        
        if val == target:
            return True
        elif val > target:
            col -= 1   # move left
        else:
            row += 1   # move down
    
    return False