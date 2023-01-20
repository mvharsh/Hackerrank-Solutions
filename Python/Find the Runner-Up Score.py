if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    a = list(arr)
    a.sort()
    a.reverse()
    for i in range(0,n):
        if a[i] < a[0]:
            print(a[i])
            break
