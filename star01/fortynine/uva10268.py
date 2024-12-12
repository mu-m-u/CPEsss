while True:
  x = int(input())
  eq = list(map(int,input().split()))
  del eq[-1]
  Pow = len(eq)
  ans = 0
  for i in range(len(eq)):
    ans += eq[i]*Pow*pow(x,Pow-1)
    pow-=1
  print(ans)