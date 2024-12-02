// START OF THE CODE
/*
Copyright (C) Mithun 2024
PART OF Simple projects in C
Is licensed under MIT. You have permission to redistribute, edit / modify the code. 
But, you have to include `Copyright (C) Mithun 2024` if you're distributing it.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

If you want know about the MIT license, check out https://opensource.org/license/mit! There you can see what you can do & what you cannot do.
*/
#include <stdio.h>
#include <stdbool.h>

int main() { 

    printf("Welcome to the Calculator!\n");
    printf("This is a part of Simple projects in C\n");

    int n1, n2; // n1 = number 1 and n2 = number 2
    char op; // op = operator
    bool run = true; // For the while loop

    while (run) {
        printf("Enter your first number: "); // Example: 1
        scanf("%d", &n1);
        getchar();
        printf("Enter the operator: "); // Example: +
        scanf("%c", &op);
        printf("Enter your second number: "); // Example: 2
        scanf("%d", &n2);
        switch (op) {

            /*
            Fact: The you can only the OR symbol (||) in only one of the case statments else it'll not work!
            */

            case '*': // Is it multipliction?
            case 'x': // Alternative for the above
                printf("Your answer is: %d", n1 * n2);
                run = false;
                break;
            case '/': // Is it division?
                if (n2 == 0) {
                    printf("Failed to calcuate your answer. Error: Cannot divide by 0.");
                    break;
                } else {
                    printf("Your answer is: %d", n1 / n2);
                }
                run = false;
                break;
            case '+': // Is it addation?
                printf("Your answer is: %d", n1 + n2);
                run = false;
                break;
            case '-': // Is it subtration?
                printf("Your answer is: %d", n1 - n2);
                run = false;
                break;
                
            default: // If none, then do it again
                printf("Unknown operator. Please use +, -, *, or /\n");
                break;
        }
        printf("\n\nCalculator by Mithun! Made in C"); // End it with some credits
    }
    return 0;
}
// END OF THE CODE