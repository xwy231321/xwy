num_students = int(input("输入总人数:"))
passing_count = 0
sum_passing_scores = 0

for _ in range(num_students):
  score = int(input())
  if score >= 60:
    passing_count += 1
    sum_passing_scores += score

if passing_count > 0:
  average_passing_score = sum_passing_scores / passing_count
  print(f"及格人数 {passing_count} 人,平均成绩是 {average_passing_score:.2f}")
else:
  print("及格人数 0 人,平均成绩是 0")