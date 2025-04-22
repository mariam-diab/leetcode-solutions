class Solution(object):
    def isValidSudoku(self, board):
        for i in range(9):
            row_set = set()
            col_set = set()
            box_set = set()
            for j in range(9):
                if board[i][j] != '.':
                    if board[i][j] in row_set:
                        return False
                    row_set.add(board[i][j])
                if board[j][i] != '.':
                    if board[j][i] in col_set:
                        return False
                    col_set.add(board[j][i])
                row = 3 * (i // 3)
                col = 3 * (i % 3)
                val = board[row + j // 3][col + j % 3]
                if val != '.':
                    if val in box_set:
                        return False
                    box_set.add(val)
        
        return True
