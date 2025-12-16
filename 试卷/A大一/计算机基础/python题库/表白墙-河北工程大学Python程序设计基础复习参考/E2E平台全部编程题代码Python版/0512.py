def delS(s):
  result = ""
  for char in s:
    if char != '*':
      result += char
  return result

# 给定的函数调用部分
str=input()
print(delS(str))