package main
import ("fmt";"math";"time")
func main(){
    fmt.Println("Hello")
    fmt.Println(math.Pow(2,3))
    fmt.Println(time.Now())
    t:="Hello World!"
    fmt.Println(t)
    var s int = 6
    fmt.Println(s)
    if s%2 == 0{
        fmt.Println(math.Sin(float64(s)))
    }else{
        fmt.Println(math.Cos(float64(s)))
    }
    var a int
    fmt.Scanln(&a)
    fmt.Println(a)
    for i:=0; i<5; i++{
        fmt.Println("Hello World!")
    }
    i:=2
    for i<6{
        fmt.Println("Hello World!")
        i++
    }
    switch{
        case time.Now().Hour() < 12 : fmt.Println("AM")
        default : fmt.Println("PM")
    }
    //update
    f:=func(){
        fmt.Println("Hello World!")
    }
    f()
    var q[6] int//by default initillized to 0 
    fmt.Println(q)
    q[5]=6//0 indexed
    fmt.Println(q)
    fmt.Println(len(q))
    w:=[6] int {1,2,3,4,5,6}
    fmt.Println(w)
    var e[2][3] int
    for i:=1; i<2; i++{
        for j:=1; j<3; j++{
            e[i][j]= i+j
        }
    }
    fmt.Println(e)
    //Slices(Data-Type) are more powerful than array in GO
    r:=make([]string, 3)//similar to vector
    fmt.Println(len(r))
    r=append(r, "Hello")//push_back
    r=append(r, "World")//we need to accept the value as append can return new slice value
    r=append(r, "!")
    r[0]="0"
    r[1]="1"
    r[2]="2"
    fmt.Println(r)
    z:=make([]string, 6)
    copy(z, r)//copy(to, from)
    fmt.Println(z)
    l:=z[2:4]
    m:=z[:2]//exculdes 2
    n:=z[3:]//includes 3
    fmt.Println(l)
    fmt.Println(m)
    fmt.Println(n)
    o:=[]int{1, 2, 3, 4, 5, 6}
    fmt.Println(o)
    k:=make([]int, 3)
    fmt.Scanln(&k[0])
    fmt.Scanln(&k[1])
    fmt.Scanln(&k[2])
    fmt.Println(k)
    b:=make([][]int, 3)//size of inner slice may vary 
    for i:=0; i<2; i++{
        b[i] = make([]int, 3)
        for j:=0; j<3; j++{
            b[i][j]=i+j
        }
    }
    fmt.Println(b)
    h:=make([][]int, 3)
    for i:=0; i<2; i++{
        inner:= i+1
        h[i] = make([]int, inner)
        for j:=0;j<inner;j++{
            h[i][j]=i+1
        }
    }
    fmt.Println(h)
    //https://gobyexample.com/slices
}
