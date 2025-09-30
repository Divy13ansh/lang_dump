package main

import(
	"encoding/json"
	"fmt"
	"net/http"
)

type User struct{
	ID int `json: "id"`
	Name string `json: "name"`
}

var users = []User{
	{ID: 1, Name: "Alice"},
	{ID: 2, Name: "Bob"},
}

func getUsers(w http.ResponseWriter, r *http.Request){
	w.Header().Set("Content-Type", "application/json")
	json.NewEncoder(w).Encode(users)
}

// func main(){
// 	http.HandleFunc("/users", getUsers)
// 	fmt.Println("Server running on http://localhost:8080")
// 	http.ListenAndServe(":8080", nil)
// }