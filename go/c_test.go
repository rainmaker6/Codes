package math

import "testing"

func TestDivide(t *testing.T){

    got := Divide(4, 2)
    want := 2

    if got != want {
        t.Errorf("got %q, wanted %q", got, want)
    }
}