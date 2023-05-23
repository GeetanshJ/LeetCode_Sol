import java.util.Stack;
class Solution {
    public int minLength(String s) {
       Stack<Character> stack = new Stack<>();

        for (char c : s.toCharArray()) {
            if (!stack.isEmpty() && ((stack.peek() == 'A' && c == 'B') || (stack.peek() == 'C' && c == 'D'))) {
                stack.pop();
            } else {
                stack.push(c);
            }
        }

        return stack.size();
    }

    
}