package main

import(
	"fmt"
	"time"
)

func bob(){
	for i:=0;i<5;i++ {
		fmt.Println("Hey, I am Bob!")
		time.Sleep(500 * time.Millisecond)
	}
}

func alice(){
	for i:=0;i<5;i++ {
		fmt.Println("Hi, I am Alice!")
		time.Sleep(500 * time.Millisecond)
	}
}

func charlie(){
	for i:=0;i<5;i++ {
		fmt.Println("Hola, Mi llamo Charlie!")
		time.Sleep(500 * time.Millisecond)
	}
}

// func main(){
// 	go alice()
// 	go bob()
// 	go charlie()
// 	time.Sleep(3 * time.Second)
// 	fmt.Println("Don1!")
// }