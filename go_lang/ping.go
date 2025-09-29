package main

import(
	"fmt"
	"time"
)

func ping(ch chan string){
	for i:=0;i<5;i++ {
		ch <- "Ping!"
		time.Sleep(1 * time.Second)
	}
	close(ch)
}

func pong(ch chan string){
	for i :=0;i<5;i++ {
		ch <- "Pong!"
		time.Sleep(1 * time.Second)
	}
	close(ch)
}

// func main(){
// 	ch := make(chan string)

// 	go ping(ch)
// 	go pong(ch)
// 	for msg := range ch {
// 		fmt.Println(msg)
// 	}
// 	fmt.Println("Done!")
// }