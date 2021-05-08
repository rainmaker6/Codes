package math

import "testing"

func TestAdd(t *testing.T){

    got := Multiply(4, 6)
    want := 24

    if got != want {
        t.Errorf("got %q, wanted %q", got, want)
    }
}