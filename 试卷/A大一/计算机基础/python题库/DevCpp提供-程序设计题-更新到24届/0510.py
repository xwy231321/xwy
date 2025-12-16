def mean(x):
  if not x:
    return 0  # 处理空列表的情况
  return sum(x) / len(x)

# 给定的函数调用部分
x = eval(input())
print("列表 x ", x, " 的 平均值 是 : %.3f " % mean(x))