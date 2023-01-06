package main

import "fmt"

func main() {

	// initional an arr with auto length
	arr := [...]int{2,5,8,20,6,10,13,21,43,15}

	// for loop to get each element
	for i := 0; i < len(arr)-1; i++ {

		// initional the index of minimun element
		minPosition := i;

		// compare the element to get the minimum index
		for j:=i+1; j< len(arr); j++ {

			// go can't use the conditional operator
			if(arr[j] < arr[minPosition]) {
				minPosition = j
			}
		}

		// exchange the element
		tmp := arr[i]
		arr[i] = arr[minPosition]
		arr[minPosition] = tmp
	}
	fmt.Println(arr)
}