def grade(math, eng, chinese):
  total_sum = math + eng + chinese
  average = total_sum / 3
  return total_sum, average
math = int(input("请输入数学成绩: "))
eng = int(input("请输入英语成绩: "))
chinese = int(input("请输入语文成绩: "))

sum_result, avg_result = grade(math, eng, chinese)

print("成绩总和: %d , 平均成绩: %.2f" % (sum_result, avg_result))