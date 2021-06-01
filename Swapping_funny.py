# Original Order:
# 1 2 3 4 5

# Swapped Order:
# 3 4 1 5 2

def main():
  a=int(input())
  b=int(input())
  c=int(input())
  d=int(input())
  e=int(input())
  print(f"Original Order:\n{a} {b} {c} {d} {e}")
  a, b ,c, d, e=c, d, a, e, b
  print(f"Swapped Order:\n{a} {b} {c} {d} {e}")
  
main()
