package math

import "testing"

func TestSubtract(t *testing.T){

    got := Subtract(6, 3)
    want := 3

    if got != want {
        t.Errorf("got %q, wanted %q", got, want)
    }
}