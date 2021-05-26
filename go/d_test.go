package math

import "testing"

func TestMultiply(t *testing.T){

    got := Add(4, 6)
    want := 24

    if got != want {
        t.Errorf("got %q, wanted %q", got, want)
    }
}