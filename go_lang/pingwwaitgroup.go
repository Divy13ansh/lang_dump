package main

import(
	"fmt"
	"sync"
	"time"
)

func pingw(wg *sync.WaitGroup, ch chan string){
	defer wg.Done()
	for i:=0;i<5;i++ {
		ch <- "PING!"
		time.Sleep(500 * time.Millisecond)
	}
}

func pongw(wg *sync.WaitGroup, ch chan string){
	defer wg.Done()
	for i:=0;i<5;i++ {
		ch <- "PONG!"
		time.Sleep(500 * time.Millisecond)
	}
}

// func main(){
// 	ch := make(chan string)

// 	var wg sync.WaitGroup
// 	wg.Add(2)

// 	go pingw(&wg, ch)
// 	go pongw(&wg, ch)

// 	go func(){
// 		wg.Wait()
// 		close(ch)
// 	}()

// 	for msg := range ch{
// 		fmt.Println(msg)
// 	}

// 	fmt.Println("DONE!!!")
// }