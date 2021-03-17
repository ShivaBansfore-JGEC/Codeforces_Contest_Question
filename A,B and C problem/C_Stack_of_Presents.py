for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    tme=0
    idx=-1
    for i in range(m):
        for j in range(n):
            if(idx==-1):
                if(b[i]==a[j]):
                    tme+=(2*i+1)
                    idx=i
                    break
            else:
                if(b[i]==a[j]):
                    if(i<=idx):
                        tme+=1
                        idx=i 
                        break
                else:
                    if(b[i]==a[j]):
                        tme+=(2*i+1)
                        idx=i
                        break
                        

    print(tme)