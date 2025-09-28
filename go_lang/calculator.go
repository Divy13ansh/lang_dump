package main

import "fmt"

func multiply(a, b int) int{
	return a*b
}

func divide(a, b int) (int, error){
	if(b != 0){
		return a/b, nil
	}else{
		return 0, fmt.Errorf("cannot divide by zero")
	}
}

// func main(){
// 	var a int = 20;
// 	var b int = 0;
// 	fmt.Println("Multiplication: ", multiply(a,b))
// 	result, error := divide(a,b)
// 	if(error != nil){
// 		fmt.Println("Error in division: ", error)
// 	}else{
// 		fmt.Println("Division: ", result)
// 	}
// }