
#include "../push_swap.h"

int ft_pop(Stack *s) {
    if (s->top == NULL) {
        printf("Stack is empty.\n");
        return -1; // Ou outro código de erro dependendo do caso de uso.
    }

    Node* temp = s->top;
    int popped_value = temp->data;
    s->top = s->top->next;
    free(temp);

    return popped_value;
}
