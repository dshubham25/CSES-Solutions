
from typing import NamedTuple


def weird_alorithm(n):
    while(n != 1):
        if n % 2 == 0:
            n = n // 2
            return n
        else:
            n = n*3 + 1
            return n


num = int(input())
l = []
l.append(num)

while (num != 1):
    num = weird_alorithm(num)
    l.append(num)
for number in range(len(l)):
    print(l[number], end=' ')
