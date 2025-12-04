package main

import ( // grouping multiplie import together
	"fmt"
	"log"
	"net/http"
	"os"
)

func main() {
	// Read the port from env variables
	port := os.Getenv("PORT")

	// fallback to default port 8080 if env variable not found
	if port == "" {
		port = "8080"
		log.Println("Defaulting to port", port)
	}

	// simple handler function
	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		// pointer is used for the request because middlewares tend to use modify the request
		fmt.Fprintf(w, "Hello! Server is running on port %s", port)
	})

	// Start the server
	log.Printf("Server started in port %s...", port)

	if err := http.ListenAndServe(":"+port, nil); err != nil { //`:` allows all network interfaces
		log.Fatal(err)
	}
}
