package main

import "fmt"

type TODO struct{
	ID int
	Title string
	Done bool
}

func(t *TODO) MarkDone(){
	t.Done = true
}

// func main(){
// 	todo1 := TODO{ID: 1, Title: "Learn GO", Done: false}
// 	fmt.Println("Before: ", todo1)

// 	todo1.MarkDone()
// 	fmt.Println("After: ", todo1)
// }