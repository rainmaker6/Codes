package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"sort"
	"strconv"
	"strings"
	"sync"
)

func main() {
	w := scanInt()
	if w > 2 && w % 2 == 0 {
		_, _ = printFmt("YES")
	} else {
		_, _ = printFmt("NO")
	}
}
/*********************** I/O ***********************/

var channelType chan string
var in *bufio.Scanner
var oWg *sync.WaitGroup
var printFmt func(a ...interface{}) (n int, err error)

func init() {
	printFmt = fmt.Println

	in = bufio.NewScanner(os.Stdin)
	in.Buffer(make([]byte, 1024), int(1e+9))
	in.Split(bufio.ScanWords)

	channelType = make(chan string, 16)
	oWg = &sync.WaitGroup{}
	oWg.Add(1)

	writer := bufio.NewWriter(os.Stdout)
	go func() {
		defer oWg.Done()
		defer writer.Flush()

		for line := range channelType {
			_, _ = writer.WriteString(line + "\n")
		}
	}()
}

func scanString() string {in.Scan(); return in.Text() }
func scanInt() int {i, _ := strconv.Atoi(scanString()); return i}
func scanInt64() int64 {i, _ := strconv.ParseInt(scanString(), 10, 64); return i}
func scanStringSlice(n int) []string {s := make([]string, n); for i := 0; i < n; i++ {s[i] = scanString()}; return s}
func scanIntSlice(n int) []int {arr := make([]int, n); for i := 0; i < n; i++ {arr[i] = scanInt()}; return arr}
func scanInt64Slice(n int) []int64 {arr := make([]int64, n); for i := 0; i < n; i++ {arr[i] = scanInt64()}; return arr}

/*********************** Utils ***********************/


func stringEquivalent(v interface{}) string {return fmt.Sprintf("%v", v)}
func spaceSeperatedStringFromArray(a []int) string {sb := strings.Builder{}; sb.Grow(len(a) * 9); for i := range a {sb.WriteString(strconv.Itoa(a[i]) + " ")}; return sb.String()}
func spaceSeperatedStringFromArray64(a []int64) string {sb := strings.Builder{}; sb.Grow(len(a) * 9); for i := range a {sb.WriteString(strconv.FormatInt(a[i], 10) + " ")}; return sb.String()}
func minMaxFromArray(args ...int64) (int64, int64) {minVal, maxVal := int64(math.MaxInt64), int64(math.MinInt64); for _, v := range args {if v < minVal {minVal = v}; if v > maxVal {maxVal = v}}; return minVal, maxVal}
func minElementFromArray(args ...int64) int64 { mn, _ := minMaxFromArray(args...); return mn }
func maxElementFromArray(args ...int64) int64 { _, mx := minMaxFromArray(args...); return mx }
func lcmCalculation(a, b int64) int64 {return a / gcdCalculation(a, b) * b}
func gcdCalculation(a, b int64) int64 {if a == 0 {return b}; return gcdCalculation(b%a, a)}
func sortInt64Slice(a []int64) {sort.Slice(a, func(i, j int) bool { return a[i] < a[j] })}
func absoluteValue(x int64) int64 {if x < 0 {return -x}; return x}
func min(args ...int64) int64 { mn, _ := MnMx(args...); return mn }
func max(args ...int64) int64 { _, mx := MnMx(args...); return mx }
func MnMx(args ...int64) (int64, int64) {
	minVal, maxVal := int64(math.MaxInt64), int64(math.MinInt64)
	for _, v := range args {
		if v < minVal {
			minVal = v
		}
		if v > maxVal {
			maxVal = v
		}
	}
	return minVal, maxVal
}
func sorting(array []int64, fromElement int, toElement int) []int64 {
	var arr []int64
	for i := fromElement; i <= toElement; i++ {
		arr = append(arr, array[i])
	}
	sort.Slice(arr, func(i, j int) bool { return arr[i] < arr[j] })
	s := 0
	for i := fromElement; i <= toElement; i++ {
		array[i] = arr[s]
		s++
	}
	return array
}

func reverse(numbers []int64) []int64 {
	for i, j := 0, len(numbers)-1; i < j; i, j = i+1, j-1 {
		numbers[i], numbers[j] = numbers[j], numbers[i] }
	return numbers
}

func reversing(array []int64, fromElement int, toElement int) []int64 {
	var arr []int64
	for i := fromElement; i <= toElement; i++ {
		arr = append(arr, array[i])
	}
	arr = reverse(arr)
	s := 0
	for i := fromElement; i <= toElement; i++ {
		array[i] = arr[s]
		s++
	}
	return array
}


