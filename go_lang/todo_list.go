package main

import "fmt"

type TODO struct{
	ID int
	Title string
	Done bool
}

func (t *TODO) MarkDone(){
	t.Done = true
}

// func main(){
// 	todos := []TODO{
// 		{ID: 1, Title: "task1", Done: false},
// 		{ID: 2, Title: "task2", Done: false},
// 		{ID: 3, Title: "task3", Done: false},
// 	}
// 	fmt.Println("BEFORE")
// 	for i := range todos{
// 		fmt.Println(todos[i])
// 	}
// 	todos[0].MarkDone()
// 	fmt.Println("AFTER")
// 	for i := range todos{
// 		fmt.Println(todos[i])
// 	}
	
// }