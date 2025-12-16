def trans(matrix):
  n = len(matrix)
  transposed_matrix = [[0 for _ in range(n)] for _ in range(n)]
  for i in range(n):
    for j in range(n):
      transposed_matrix[j][i] = matrix[i][j]
  return transposed_matrix

# 给定的函数调用部分
x = eval(input())
print("x 矩阵 : ", x)
print("转置 为 : ", trans(x))