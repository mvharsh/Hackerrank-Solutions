if __name__ == '__main__':
    students = []
    a = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        a.append(name)
        a.append(score)
        students.append(a)
        a=[]
    n = len(students)
    name=[]
    mark=[]
    for s in students:
        name.append(s[0])
        mark.append(s[1])
    for i in range(0,n):
        for j in range(1,n):
            if mark[j-1]>mark[j]:
                mark[j-1],mark[j] = mark[j],mark[j-1]
                name[j-1],name[j] = name[j],name[j-1]
    for m in range(n):
        if mark[m]>mark[0]:
            num = mark[m]
            break;
    name2 = []
    for m in range(n):
        if num==mark[m]:
            name2.append(name[m])
    name2.sort()
    for n in name2:
        print(n)
