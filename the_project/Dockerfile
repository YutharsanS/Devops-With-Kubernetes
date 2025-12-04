FROM golang:alpine AS builder
WORKDIR /app
COPY . .
RUN GOOS=linux GOARCH=amd64 go build -o server-linux main.go

FROM scratch
WORKDIR /app
COPY --from=builder /app/server-linux .

CMD ["./server-linux"]