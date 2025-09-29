package main

import(
	"fmt"
	"sync"
	"time"
)

func babbu(wg *sync.WaitGroup){
	defer wg.Done()
	for i:= 0;i<5;i++ {
		fmt.Println("Hey, I am Babbu")
		time.Sleep(500 * time.Millisecond)
	}
}

func sharry(wg *sync.WaitGroup){
	defer wg.Done()
	for i:=0;i<5;i++ {
		fmt.Println("Hloo, I am sharry")
		time.Sleep(500 * time.Millisecond)
	}
}

// func main(){
// 	var wg sync.WaitGroup
// 	wg.Add(2)

// 	go babbu(&wg)
// 	go sharry(&wg)

// 	wg.Wait()
// 	fmt.Println("Done!")
// }