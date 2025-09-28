package main

import (
	"errors"
	"fmt"
)

func increment(p *int){
	*p = *p + 1
}

func safeDivide(a, b int) (int, error){
	if(b == 0){
		return 0, errors.New("cannot divide by zero")
	}
	return a/b, nil
}

// func main(){
// 	x := 10

// 	increment(&x)

// 	fmt.Println("After Increment: ", x)

// 	res, err := safeDivide(10,2)
	
// 	if(err != nil){
// 		fmt.Println("Error: ", err)
// 	}else{
// 		fmt.Println("10 / 2 = ", res)
// 	}

// 	res,err = safeDivide(10, 0)

// 	if(err != nil){
// 		fmt.Println("Error", err)
// 	}else{
// 		fmt.Println("10 / 0 = ", res)
// 	}
// }