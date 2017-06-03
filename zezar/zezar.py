# Solves "donKEY Kong" from the 2017 HSPC at UVa
# Solution by Joseph Tobin, 2017

from sys import stdin

if __name__ == '__main__':
  data = stdin.read().splitlines()
  n = int(data[0])
  i = 1
  for case in range(n):
    c_solved = data[i]
    i = i+1;
    p_solved = data[i];
    i = i + 1
    c_unsolved = data[i]
    i = i + 1

    ans = ""

    key = (ord(c_solved[0]) - ord(p_solved[0])) % 26

    for c in c_unsolved:
      if(not (c == "_")) :
        ans += chr( (((ord(c)%65) - key) % 26) + 65 )
      else :
        ans += "_"

    print("Case " + str(case + 1) + ": " + ans)

