package main
import ("fmt";"math";"time")
const st string = "Constantstring"
func main(){
    fmt.Print("Hello, World\n")
    fmt.Println("1+1 = ", 1+1)
    fmt.Println("7.0/3.0 = ", 7.000000/3.000000)
    fmt.Println(true && false) 
    fmt.Println(false || true)
    fmt.Println(!true)
    var s string//go automatically takes the datatype of the variable
    t:="Hello, World"// same as var f string = "Hello, World"
    fmt.Scanln(&s)
    fmt.Println(s +" "+ t)
    var a, b int = 3, 3 //both variable should be of type int
    fmt.Println(a + b)
    var c, d int
    fmt.Scanln(&c)
    fmt.Scanln(&d)
    fmt.Println(c + d)
    var e = "Apple"
    fmt.Println(e)
    //uninitialized variables are zero-valued
    fmt.Println(st +" "+ e)
    //a numeric constant has no type untill it's given one, such as by an explicit conversion
    const n = 50000000
    const f = 3e20/n
    fmt.Println(f)
    fmt.Println(int64(f))//explict type conversion
    fmt.Println(math.Sin(n))//expects float64
    for i:=0; i<10; i++{
        if (i%2==0){
            fmt.Print(i+1)
            fmt.Print(" ")
        }
        continue
        fmt.Println("WORM")
    }
    fmt.Println()//new line char
    i:=1
    for i<4{
        fmt.Println(i)
        i++//go don't support pre-incrementation
    }
    //for{//infinite loop
        //fmt.Println("VIRUS")
    //}
    //no ? in golang
    if 7%2 == 0{
        fmt.Println("7 is even")
    } else{//continue else from this line
        fmt.Println("7 is odd")
    }
    if i=6; i<0{
        fmt.Println(i, "is negative")
    } else if i<10{
        fmt.Println(i, "has 1 digit")
    } else{
        fmt.Println(i, "has multiple digits")
    }
    switch time.Now().Weekday(){
        case time.Monday : fmt.Println("Monday")
        case time.Tuesday : fmt.Println("Tuesday")
        case time.Wednesday : fmt.Println("Wdenesday")
        case time.Thursday : fmt.Println("Thursday")
        case time.Friday : fmt.Println("Friday")
        case time.Saturday : fmt.Println("Saturday")
        case time.Sunday : fmt.Println("Sunday")
        default : fmt.Println("Wrong Input")
    }
    g:=time.Now()
    switch{
        case g.Hour() < 12 : fmt.Println("It's before noon")
        default : fmt.Println("It's after noon")
    }
    function := func(i interface{}){
        switch h:=i.(type){
            case bool : fmt.Println("Boolean Value")
            case int : fmt.Println("Integer Value")
            default : fmt.Println("The type of %c is not known", h)
        }
    }
    function(true)
    function(6)
    function("hello")
    //https://hermanschaaf.com/open-source-go-projects-to-learn-from/
}
