import random
def isDigitPresent(x, d):
    while (x > 0):
        if (x % 10 == d):
            break

        x = x / 10

    # If loop breaks
    return (x > 0)

def addition(N):
    num = 0
    li = []
    res = []
    sol = []
    for a in range(2, N):
        for b in  range(2, N):
            if ((a + b) == N):

                if (not (isDigitPresent(a, 4) or isDigitPresent(b, 4))):
                    li = [a, b]
                    sol.append(li)
    res = random.choice(sol)
    return res

if __name__ == '__main__':
    n = int(input())
    digit = 0
    results = []
    for i in range(1, n+1):
        digit = int(input())
        results.append(digit)

    for i in results:
        result = addition(i)
        result = ' '.join(str(e) for e in result)
        print ('Case #'+ str(i) + ': ' + result)
