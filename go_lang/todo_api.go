package main

import(
	"encoding/json"
	"fmt"
	"net/http"
)

type Todo struct{
	ID int `json: "id"`
	Task string `json: "task"`
	Done bool `json: "done"`
}

var todos = []Todo{
	{ID: 1, Task: "LC", Done: false},
	{ID: 2, Task: "Gym", Done: false},
}

func gettodos(w http.ResponseWriter, r *http.Request){
	w.Header().Set("Content-Type", "application/json")
	json.NewEncoder(w).Encode(todos)
}

func main(){
	http.HandleFunc("/todos", gettodos)
	fmt.Println("Server running on http://localhost:8081")
	http.ListenAndServe(":8081", nil)
}