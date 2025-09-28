package main

import "fmt"

var students = []string{"Alice", "Bob", "Charlie"}
var grades = map[string]int{"Alice": 90, "Bob": 80, "Charlie": 92}

func add_student(name string, grade int){
	students = append(students, name)
	grades[name] = grade
	fmt.Println("Added student", name, "with grade", grade)
}

func display(){
	sum := 0
	count := 0
	for i:= range students{
		stud := students[i]
		sum += grades[stud]
		count++
		fmt.Println(stud, ": ", grades[stud])
	}
	avg := sum/count
	fmt.Println("Average grade: ", avg)
}

// func main(){
// 	display()
// 	add_student("Divyansh", 100)
// 	display()
// }