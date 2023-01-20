if __name__ == '__main__':
    N = int(input())
    ans = []
    for _ in range(N):
        a = input()
        a = a.split()
        if a[0]=="insert":
            ans.insert(int(a[1]),int(a[2]))
        elif a[0]=="print":
            print(ans)
        elif a[0]=="remove":
            ans.remove(int(a[1]))
        elif a[0]=="append":
            ans.append(int(a[1]))
        elif a[0]=="sort":
            ans.sort()
        elif a[0]=="pop":
            ans.pop()
        elif a[0]=="reverse":
            ans.reverse()
