package main

import (
	"fmt"
	"time"
)

func worker(id int, ch chan string){
	for i:=1; i<=3;i++ {
		msg := fmt.Sprintf("Worker %d: task %d", id, i)
		ch <- msg
		time.Sleep(500 * time.Millisecond)
	}

	ch <- fmt.Sprintf("Worker %d done", id)

}

// func main(){
// 	ch := make(chan string)
// 	go worker(1, ch)
// 	go worker(2, ch)

// 	for i:= 0; i<8; i++ {
// 		fmt.Println(<-ch)
// 	}
// }