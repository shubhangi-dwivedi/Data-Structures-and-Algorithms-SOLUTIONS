# cook your dish here
for i in range(int(input())):
    a, b=map(int,input().split())
    c=pow(2,a,1000000007)-1
    print(pow(c,b,1000000007))