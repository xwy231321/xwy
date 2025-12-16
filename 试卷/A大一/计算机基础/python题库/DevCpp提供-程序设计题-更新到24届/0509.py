def find_min(L):
  min_val = L[0]
  min_index = 0
  for i in range(1, len(L)):
    if L[i] < min_val:
      min_val = L[i]
      min_index = i
  return min_val, min_index

# 给定的函数调用部分
L = eval(input())
minL, loc = find_min(L)
print("列表 中的 最小值 : %d , 索引 值 : %d " % (minL, loc))