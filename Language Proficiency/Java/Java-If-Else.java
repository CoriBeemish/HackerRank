// Completed on January 15th, 2019

// Java If-Else
// https://www.hackerrank.com/challenges/java-if-else/problem

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.close();

        String answer = "";

        if(N % 2 == 1) {
            answer = "Weird";
        }
        else {
            if (N >= 2 && N <= 5){
                answer = "Not Weird";
            }
            else if (N >= 6 && N <= 20) {
                answer = "Weird";
            }
            else if (N > 20) {
                answer = "Not Weird";
            }
        }
        System.out.println(answer);

    }
}


