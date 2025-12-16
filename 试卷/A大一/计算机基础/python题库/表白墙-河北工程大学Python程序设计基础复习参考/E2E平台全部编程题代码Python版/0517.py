def lenJudge(content):
  if len(content) >= 5:
    return "True"
  else:
    return "False"

# 给定的函数调用部分
content = input("请输入内容: ")
print(lenJudge(content))