void swap(struct Node *ptr, int n)
// {
//     struct Node *p;
//     p = ptr->next;
//     if (n % 2 == 0)
//     {
//         while (ptr != NULL)
//         {
//             struct Node *temp = ptr->next;
//             ptr->next = p->next;
//             p->next = temp;
//             ptr = ptr->next->next;
//             p = p->next->next;
//         }
//     }
//     else
//     {
//         while (ptr->next != NULL)
//         {
//             struct Node *temp;
//             temp = ptr->next;
//             ptr->next = p;
//             p.me = temp;
//             ptr = ptr->next->next;
//             p = p->next->next;
//         }
//     }
//     display(head);
// }