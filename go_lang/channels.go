package main

import(
	"fmt"
	"time"
)

func sendMessage(ch chan string){
	time.Sleep(1 * time.Second)

	ch <- "Hello from goroutine!"
}

// func main(){
// 	ch := make(chan string)

// 	go sendMessage(ch)

// 	msg := <-ch

// 	fmt.Println("Got:", msg)
// }