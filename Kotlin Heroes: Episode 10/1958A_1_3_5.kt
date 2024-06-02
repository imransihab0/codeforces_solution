import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    repeat(t) {
        solve(scanner)
    }
}

fun solve(scanner: Scanner) {
    val n = scanner.nextInt()
    if (n > 11) {
        println(0)
        return
    }
    
    val hash = intArrayOf(1, 2, 0, 1, 0, 0, 1, 0, 0, 0, 0)
    println(hash[n - 1])
}
