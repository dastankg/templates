package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)

	w := bufio.NewWriter(os.Stdout)
	defer w.Flush()

	var t int
	scanInt(scanner, &t)
	
	fmt.Fprintln(w, t)
	
}

func scanInt(scanner *bufio.Scanner, val *int) {
	scanner.Scan()
	*val = 0
	for _, ch := range scanner.Bytes() {
		*val = *val*10 + int(ch-'0')
	}
}