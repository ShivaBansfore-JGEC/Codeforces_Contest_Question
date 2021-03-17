import sys

arr=[]
def sum_of_digit(n):
    sum=0
    while(n!=0):
        r=n%10
        arr.append(r)
        sum+=r
        n//=10
    return sum


def solve():
    global arr
    n=int(input())
    s=int(input())
    sum=sum_of_digit(s)
    ar=arr[::-1]
    if(s%2!=0):
        if(sum%2==0):
            print(s)
        else:
            ln=len(ar)-2
            while(ln>=0):
                if((sum+ar[ln])%2==0):
                    ar.remove(ar[ln])
                    sum-=ar[ln]
                    break 
                ln-=1
            ans=0
            for i in ar:
                ans=(ans*10+i)
            print(ans)
    else:
      print(ar)
    arr.clear()








def main():
    t=int(input())
    while(t>=0):
        solve()
        t-=1
main()