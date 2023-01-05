package main

import "fmt"

func main() {
	arr := [...]int{2,5,8,20,6,10,13,21,43,15}
	for k := range arr {
		minPosition := k;
		for j:=k+1; j< len(arr); j++ {
			if(arr[j] < arr[minPosition]) {
				minPosition = j
			}
		}
		tmp := arr[k]
		arr[k] = arr[minPosition]
		arr[minPosition] = tmp
	}
	fmt.Println(arr)
}