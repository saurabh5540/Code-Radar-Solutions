#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read number of players

    int games[1000]; // Array to store game IDs
    for (int i = 0; i < n; i++) {
        scanf("%d", &games[i]); // Read game IDs
    }

    int max_count = 0; // Track the highest frequency
    int result = games[0]; // Initialize with the first game ID

    // Iterate through each game ID to find the most frequent one
    for (int i = 0; i < n; i++) {
        int current_count = 0;
        // Count occurrences of the current game ID
        for (int j = 0; j < n; j++) {
            if (games[j] == games[i]) {
                current_count++;
            }
        }
        // Update result if current game has higher frequency,
        // or same frequency but smaller ID
        if (current_count > max_count || 
            (current_count == max_count && games[i] < result)) {
            max_count = current_count;
            result = games[i];
        }
    }

    printf("%d\n", result); // Output the result
    return 0;
}