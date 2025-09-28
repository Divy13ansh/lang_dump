package main

import (
	"fmt"
	"math"
	"errors"
)

func doubleValue(p *int){
	*p = 2 * *p
}

func safeSqrt(n *int) (float64, error){
	if(*n < 0){
		return 0, errors.New("Can't sqrt negative numbers")
	}else{
		*n = int(math.Sqrt(float64(*n)))
		return math.Sqrt(float64(*n)), nil
	}
}

func main(){
	a := 10
	b := 16

	fmt.Println("BEFORE")
	fmt.Println("a: ", a)
	fmt.Println("b: ", b)

	doubleValue(&a)
	safeSqrt(&b)

	fmt.Println("AFTER")
	fmt.Println("a: ", a)
	fmt.Println("b: ", b)
}