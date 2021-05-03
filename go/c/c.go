package main
import ("fmt")
func main(){
        m:=make(map[int]int)
        m[1]=1
        m[2]=2
        fmt.Println(m)
        _,val:=m[1]
        fmt.Println(val)
}
